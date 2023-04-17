#include <bits/stdc++.h>
using namespace std;

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
    while (a != NULL) {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}

void hopnhat(node L1, node L2) {
    node L3 = NULL;
    node l1 = L1;
    node l2 = L2;
    while (l1 != NULL && l2 != NULL) {
        if (l2->data < l1->data) {
            insertLast(L3, l2->data);
            l2 = l2->next;
        } else if (l1->data < l2->data) {
            insertLast(L3, l1->data);
            l1 = l1->next;
        } else {
            insertLast(L3, l1->data);
            insertLast(L3, l2->data);
            l1 = l1->next;
            l2 = l2->next;
        }
    }
    // print remaining elements of L1 and L2
    while (l1 != NULL) {
        insertLast(L3, l1->data);
        l1 = l1->next;
    }
    while (l2 != NULL) {
        insertLast(L3, l2->data);
        l2 = l2->next;
    }
    in(L3);
}

int main() {
    node L1 = NULL;
    node L2 = NULL;
    int x_L1;
    int TC_L1;
    cin >> TC_L1;
    int TC_L2;
    cin >> TC_L2;
    while (TC_L1--) {
        cin >> x_L1;
        insertLast(L1, x_L1);
    }
    int x_L2;
    while (TC_L2--) {
        cin >> x_L2;
        insertLast(L2, x_L2);
    }
    hopnhat(L1,L2);
    
 	return 0;   
}
