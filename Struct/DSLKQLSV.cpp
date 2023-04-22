#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
using namespace std;

struct Node{
    string hodem;
    string ten;
    float marks;
    Node *next;
};

typedef struct Node *node;

node makenode(string hodem,string ten,float marks){
    node tmp = new Node();
    tmp->hodem = hodem;
    tmp->ten = ten ;
    tmp->marks = marks;
    tmp->next = NULL;
    return tmp;
}

string trim(const string& str) {
    size_t start = 0;
    size_t end = str.length() - 1;
    while (start <= end && isspace(str[start])) {
        ++start;
    }
    while (end > start && isspace(str[end])) {
        --end;
    }
    return str.substr(start, end - start + 1);
}

void insertlast(node &a,string hodem,string ten,float marks){
    node tmp = makenode(trim(hodem), trim(ten), marks);
    if(a == NULL){
        a = tmp;
    }
    else{
        node p = a;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}

void sapxep(node a){
    node p = a;
    while(p != NULL){
        node run = p->next;
        while(run != NULL){
            if(p->marks < run->marks){
                float tmp = p->marks;
                p->marks = run->marks;
                run->marks = tmp;
                string tmp2 = p->hodem;
                p->hodem = run->hodem;
                run->hodem = tmp2;
                tmp2 = p->ten;
                p->ten = run->ten;
                run->ten = tmp2;
            }
            run = run->next;
        }
        p = p->next;
    }
}

void printList(node head) {
    cout << "<?xml version=1 encoding=UTF-8?>" << endl;
    sapxep(head);
    for (node cur = head; cur != NULL; cur = cur->next) {
        if (cur->marks >= 5) {
            cout << "<Student>" << endl;
            cout << "   <LastName>" << cur->hodem << "</LastName>" << endl;
            cout << "   <FirstName>" << cur->ten << "</FirstName>" << endl;
            cout << "   <Mark>" << cur->marks << "</Mark>" << endl;
            cout << "</Student>" << endl;
        }
    }
}

int main(){
    node head = NULL;
    string hodem, ten;
    float marks;
    clock_t start_time = clock();
    int n = 5;
    while(1){
        getline(cin, hodem, ',');
        if (hodem.empty()) break;
        getline(cin, ten, ',');
        cin >> marks;
        cin.ignore();
        insertlast(head, hodem, ten, marks);
        
        // check if elapsed time is greater than 5 seconds
        if (((double) (clock() - start_time) / CLOCKS_PER_SEC) > 5) {
            printList(head);
            return 0;
        }
    }
    printList(head);
    return 0;
}

