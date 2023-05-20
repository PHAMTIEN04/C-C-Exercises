#include <iostream>

struct Node {
    int data;
    Node* next;
};

typedef struct Node* node;

node makenode(int x) {
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

void insertLast(node& a, int x) {
    node tmp = makenode(x);
    if (a == NULL) {
        a = tmp;
    } else {
        node p = a;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = tmp;
    }
}

void in(node a) {
    if (a == NULL) {
        std::cout << "Danh sach rong" << std::endl;
        return;
    }
    
    while (a != NULL) {
        std::cout << a->data << " ";
        a = a->next;
    }
    std::cout << std::endl;
}

void sortList(node& head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    node current = head;
    node index = NULL;
    int temp;

    while (current != NULL) {
        index = current->next;

        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}

int main() {
    node head = NULL;
    int data;
    int t = 4;
    int count = 0;

    while (t--) {
        std::cin >> data;
        insertLast(head, data);
        count++;
    }

    if (count == 0) {
        std::cout << "Danh sach rong" << std::endl;
    } else {
        sortList(head);
        in(head);
    }

    return 0;
}

