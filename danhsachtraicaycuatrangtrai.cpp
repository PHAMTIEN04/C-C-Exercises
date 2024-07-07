#include <iostream>
#include <string>
using namespace std;

struct Node {
    int mahang;
    int trongluong; // tinh theo kg
    int dongia;
    string tentraicay; // Bo, Mit, Sau-Rieng
    Node* next;
};

typedef Node* node;

node khoitao(int mh, int tl, int dg, string ttc) {
    node tmp = new Node;
    tmp->mahang = mh;
    tmp->trongluong = tl;
    tmp->dongia = dg;
    tmp->tentraicay = ttc;
    tmp->next = NULL;
    return tmp;
}

void themdau(node &first, int mh, int tl, int dg, string ttc) {
    node a = khoitao(mh, tl, dg, ttc);
    if (first == NULL) {
        first = a;
    } else {
        a->next = first;
        first = a;
    }
}

void themcuoi(node &first, int mh, int tl, int dg, string ttc) {
    node a = khoitao(mh, tl, dg, ttc);
    if (first == NULL) {
        first = a;
    } else {
        node p = first;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = a;
    }
}

void tong(node first, string ttc) {
    if (first != NULL) {
        int sum = 0;
        node p = first;
        while (p != NULL) {
            if (p->tentraicay == ttc) {
                sum += p->trongluong * p->dongia;
            }
            p = p->next;
        }
        cout << sum << endl;
    }
}

int main() {
    node first = NULL;
    string command;
    while (true) {
        getline(cin, command);
        if (command.substr(0, 3) == "Add") {
            int mh, tl, dg;
            string ttc;
            size_t pos = command.find(" ");
            command = command.substr(pos + 1);
            mh = stoi(command.substr(0, command.find(" ")));
            pos = command.find(" ");
            command = command.substr(pos + 1);
            tl = stoi(command.substr(0, command.find(" ")));
            pos = command.find(" ");
            command = command.substr(pos + 1);
            dg = stoi(command.substr(0, command.find(" ")));
            pos = command.find(" ");
            command = command.substr(pos + 1);
            ttc = command;
            themcuoi(first, mh, tl, dg, ttc);  
        } else if (command.substr(0, 3) == "Sum") {
            string ttc = command.substr(4);
            tong(first, ttc);
        } else if (command == "Fin") {
            break;
        }
    }

    return 0;
}
