#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    Node* next;
};

typedef struct Node* node;



int size(node a) {
    int cnt = 0;
    while (a != NULL) {
        a = a->next;
        cnt++;
    }
    return cnt;
}

void InsertFirst(node &head, int ele) {

    node newNode = new Node();

    newNode->data = ele;

    newNode->next = head;

    head = newNode;

}




void InsertPos(node &head, int ele, int pos) {

    int i = 1;

    node cur = head;

    if (pos == 1 || head == NULL) {

        InsertFirst(head, ele);

        return;

    }

    while (cur->next != NULL && i < pos - 1) {

        cur = cur->next;

        i++;

    }

    node newNode = new Node();

    newNode->data = ele;

    newNode->next = cur->next;

    cur->next = newNode;

}

void Delete(node& head, int pos) {
    int i = 1;
    node cur = head;

    if (pos == 1) {
        head = head->next;
        delete cur;
        return;
    }

    while (cur != NULL && i < pos - 1) {
        cur = cur->next;
        i++;
    }

    if (cur == NULL || cur->next == NULL) {
        return;
    }

    node temp = cur->next;
    cur->next = temp->next;
    delete temp;
}

int Sum(node head) {
    int sum = 0;
    node cur = head;
    while (cur != NULL) {
        if (cur->data > 0) {
            sum += cur->data;
        }
        cur = cur->next;
    }
    return sum;
}

int main() {
    node head = NULL;
    int n;
    cin >> n;
    int data;
    int pos;

    for (int i = 0; i < n; i++) {

        cin >>data;

        InsertFirst(head, data);

    }

    string check;
    cin >> check;
    while (check != "0") {
        if (check == "i") {
            cin >> data >> pos;
            InsertPos(head, data, pos);
        }
        else if (check == "d") {
            cin >> pos;
            Delete(head, pos);
        }
        else if (check == "r") {
            cin >> data;
            node cur = head;
            while (cur != NULL) {
                cur->data -= data;
                                cur = cur->next;
            }
        }
        else if (check == "s") {
            cout << Sum(head) << endl;
        }
        cin >> check;
    }

    // Free memory
    node cur = head;
    while (cur != NULL) {
        node temp = cur;
        cur = cur->next;
        delete temp;
    }

    return 0;
}


