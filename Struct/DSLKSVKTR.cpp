#include <iostream>
#include <string>
using namespace std;

struct Node {
    string msv;
    float dtb;
    Node* next;
};

typedef Node* node;

node makenode(string vmsv, float vdtb) {
    node tmp = new Node();
    tmp->msv = vmsv;
    tmp->dtb = vdtb;
    tmp->next = NULL;
    return tmp;
}

void InsertFirst(node& a, string vmsv, float vdtb) {
    if (a == NULL) {
        a = makenode(vmsv, vdtb);
    }
    else {
        if (vmsv == a->msv) {
            a->dtb = vdtb; // C?p nh?t di?m trung bình c?a nút d?u tiên
            return;
        }

        node tmp = makenode(vmsv, vdtb);
        tmp->next = a;
        a = tmp;
    }
}

void Delete(node& a, string vmsv) {
    if (a == NULL) {
        return;
    }

    if (vmsv == a->msv) {
        node temp = a;
        a = a->next;
        delete temp;
        return;
    }

    node previous = a;
    node current = a->next;

    while (current != NULL) {
        if (current->msv == vmsv) {
            previous->next = current->next;
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

int Count(node head, float dtb) {
    int cnt = 0;
    while (head != NULL) {
        if (head->dtb >= dtb) {
            cnt++;
        }
        head = head->next;
    }
    return cnt;
}
int main() {
    node head = NULL;
    string msv;
    float dtb;
    string check;

    while (true) {
        cin >> check;

        if (check == "Add") {
            cin >> msv >> dtb;
            InsertFirst(head, msv, dtb);
        }
        else if (check == "Del") {
            cin >> msv;
            Delete(head, msv);
        }
        else if (check == "Count") {
            cin >> dtb;
            cout << Count(head, dtb) << endl;
        }
//        else if (check == "Print") {
//            PrintList(head);
//        }
        else if (check == "Fin") {
            break;
        }
    }


    return 0;
}



