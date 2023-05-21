#include <iostream>

 

struct Node {

    int data;

    Node* next;

};

 

typedef Node* NodePtr;

 

NodePtr createNode(int x) {

    NodePtr newNode = new Node();

    newNode->data = x;

    newNode->next = nullptr;

    return newNode;

}

 

void insertLast(NodePtr& head, int x) {

    NodePtr newNode = createNode(x);

    if (head == nullptr) {

        head = newNode;

    } else {

        NodePtr currNode = head;

        while (currNode->next != nullptr) {

            currNode = currNode->next;

        }

        currNode->next = newNode;

    }

}

 

void printList(NodePtr head) {

    if (head == nullptr) {

        std::cout << "Danh sach rong" << std::endl;

        return;

    }

 

    while (head != nullptr) {

        std::cout << head->data << " ";

        head = head->next;

    }

    std::cout << std::endl;

}

 

void sortList(NodePtr head) {

    if (head == nullptr || head->next == nullptr) {

        return;

    }

 

    NodePtr currNode = head;

    NodePtr nextNode = nullptr;

    int temp;

 

    while (currNode != nullptr) {

        nextNode = currNode->next;

 

        while (nextNode != nullptr) {

            if (currNode->data > nextNode->data) {

                temp = currNode->data;

                currNode->data = nextNode->data;

                nextNode->data = temp;

            }

            nextNode = nextNode->next;

        }

        currNode = currNode->next;

    }

}

 

int main() {

    NodePtr head = nullptr;

    int data;

 

    while (std::cin >> data) {

        insertLast(head, data);

    }

 

    if (head == nullptr) {

        std::cout << "Danh sach rong" << std::endl;

    } else {

        sortList(head);

        printList(head);

    }

 

    return 0;

}

 
