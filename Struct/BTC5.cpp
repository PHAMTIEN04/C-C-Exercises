#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

struct Node {
    int Info;
    Node* Next;
};

Node* khoitao(int x) {
    Node* tmp = new Node;
    tmp->Info = x;
    tmp->Next = NULL;
    return tmp;
}

Node* timnutbe(Node* F, int x) {
    Node* q = F;
    while (q != NULL) {
        if (q->Info == x) {
            return q;
        }
        q = q->Next;
    }
    return NULL;
}

void chenx(Node*& F, int x) {
    Node* p = khoitao(x);
    if (F == NULL || F->Info >= x) {
        p->Next = F;
        F = p;
    }
    else {
        Node* q = F;
        while (q->Next != NULL && q->Next->Info < x) {
            q = q->Next;
        }
        p->Next = q->Next;
        q->Next = p;
    }
}

void xoax(Node*& F, int x) {
    if (F != NULL) {
        if (F->Info == x) {
            Node* q = F;
            F = F->Next;
            delete q;
        }
        else {
            Node* truoc = NULL;
            Node* p = F;
            while (p != NULL && p->Info != x) {
                truoc = p;
                p = p->Next;
            }
            if (p != NULL) {
                truoc->Next = p->Next;
                delete p;
            }
        }
    }
}

int TimMax(Node* F) {
    int max = F->Info;
    Node* q = F->Next;
    while (q != NULL) {
        if (max < q->Info) {
            max = q->Info;
        }
        q = q->Next;
    }
    return max;
}

void themcuoi(Node*& F, int x) {
    Node* p = khoitao(x);
    if (F == NULL) {
        F = p;
    }
    else {
        Node* q = F;
        while (q->Next != NULL) {
            q = q->Next;
        }
        q->Next = p;
    }
}

void xoacuoi(Node*& F) {
    if (F != NULL) {
        if (F->Next == NULL) {
            delete F;
            F = NULL;
        }
        else {
            Node* truoc = NULL;
            Node* p = F;
            while (p->Next != NULL) {
                truoc = p;
                p = p->Next;
            }
            truoc->Next = NULL;
            delete p;
        }
    }
}

Node* timdiachi(Node* F, int x) {
    Node* p = F;
    while (p != NULL && p->Info != x) {
        p = p->Next;
    }
    return p;
}

int size(Node* F) {
    int count = 0;
    Node* q = F;
    while (q != NULL) {
        count++;
        q = q->Next;
    }
    return count;
}

void innguoc(Node* F) {
    if (F == NULL) {
        cout << "Danh sach rong!" << endl;
        return;
    }
    int* a = new int[size(F)];
    int x = 0;
    Node* q = F;
    while (q != NULL) {
        a[size(F) - 1 - x] = q->Info;
        q = q->Next;
        x++;
    }
    for (int i = 0; i < size(F); i++) {
        cout << a[i] << " ";
    }
    delete[] a;
}

void copy(Node* F, Node*& L) {
    Node* q = F;
    while (q != NULL) {
        themcuoi(L, q->Info);
        q = q->Next;
    }
}

Node* hop(Node* F1, Node* F2) {
    Node* F3 = NULL;
    while (F1 != NULL && F2 != NULL) {
        if (F1->Info == F2->Info) {
            themcuoi(F3, F1->Info);
            F1 = F1->Next;
            F2 = F2->Next;
        }
        else {
            if (F1->Info < F2->Info) {
                themcuoi(F3, F1->Info);
                F1 = F1->Next;
            }
            else if (F1->Info > F2->Info) {
                themcuoi(F3, F2->Info);
                F2 = F2->Next;
            }
        }
    }
    while (F1 != NULL) {
        themcuoi(F3, F1->Info);
        F1 = F1->Next;
    }
    while (F2 != NULL) {
        themcuoi(F3, F2->Info);
        F2 = F2->Next;
    }
    return F3;
}

Node* giao(Node* F1, Node* F2) {
    Node* F3 = NULL;
    Node* q = F1;
    while (q != NULL) {
        if (timnutbe(F2, q->Info) != NULL) {
            themcuoi(F3, q->Info);
        }
        q = q->Next;
    }
    return F3;
}

void duyet(Node* F) {
    Node* q = F;
    while (q != NULL) {
        cout << q->Info << " ";
        q = q->Next;
    }
}

void menu() {
    cout << "MENU" << endl;
    cout << "1. Them phan tu vao danh sach" << endl;
    cout << "2. Xoa phan tu khoi danh sach" << endl;
    cout << "3. Tim gia tri lon nhat trong danh sach" << endl;
    cout << "4. Them phan tu vao cuoi danh sach" << endl;
    cout << "5. Xoa phan tu cuoi danh sach" << endl;
    cout << "6. Tim dia chi cua mot phan tu trong danh sach" << endl;
    cout << "7. In danh sach theo thu tu nguoc lai" << endl;
    cout << "8. Sao chep mot danh sach" << endl;
    cout << "9. Hop hai danh sach" << endl;
    cout << "10. Tim phan giao cua hai danh sach" << endl;
    cout << "0. Thoat" << endl;
}

int main() {
    Node* F1 = NULL;
    Node* F2 = NULL;
    Node* F3 = NULL;
    int choice;
    do {
		system("cls");
        menu();
		
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                int x;
                cout << "Nhap gia tri muon them vao danh sach: ";
                cin >> x;
                chenx(F1, x);
                cout << "Danh sach sau khi them: ";
                duyet(F1);
                cout << endl;
                system("pause");
                break;
            }
            case 2: {
                int x;
                cout << "Nhap gia tri muon xoa khoi danh sach: ";
                cin >> x;
                xoax(F1, x);
                cout << "Danh sach sau khi xoa: ";
                duyet(F1);
                cout << endl;
                system("pause");
                break;
            }
            case 3: {
                cout << "Gia tri lon nhat trong danh sach: " << TimMax(F1) << endl;
                system("pause");
				break;
                
            }
            case 4: {
                int x;
                cout << "Nhap gia tri muon them vao cuoi danh sach: ";
                cin >> x;
                themcuoi(F1, x);
                cout << "Danh sach sau khi them: ";
                duyet(F1);
                cout << endl;
                system("pause");
				break;
            }
            case 5: {
                xoacuoi(F1);
                cout << "Danh sach sau khi xoa: ";
                duyet(F1);
                cout << endl;
                break;
            }
            case 6: {
                int x;
                cout << "Nhap gia tri muon tim dia chi: ";
                cin >> x;
                Node* result = timdiachi(F1, x);
                if (result != NULL) {
                    cout << "Dia chi cua phan tu " << x << " trong danh sach: " << result << endl;
                } else {
                    cout << "Phan tu " << x << " khong co trong danh sach!" << endl;
                }
                system("pause");
                break;
            }
            case 7: {
                cout << "Danh sach theo thu tu nguoc lai: ";
                innguoc(F1);
                cout << endl;
                break;
            }
            case 8: {
                Node* F2 = NULL;
                copy(F1, F2);
                cout << "Danh sach sao chep tu danh sach goc: ";
                duyet(F2);
                cout << endl;
                system("pause");
                break;
            }
            case 9: {
                cout << "Nhap gia tri cho danh sach thu hai:" << endl;
                int x;
                cout << "Nhap so luong phan tu: ";
                cin >> x;
                cout << "Nhap " << x << " gia tri: ";
                for (int i = 0; i < x; ++i) {
                    int value;
                    cin >> value;
                    chenx(F2, value);
                }
                cout << "Danh sach thu hai: ";
                duyet(F2);
                cout << endl;
                cout << "Hop hai danh sach: ";
                F3 = hop(F1, F2);
                duyet(F3);
                cout << endl;
                system("pause");
                break;
            }
            case 10: {
                cout << "Nhap gia tri cho danh sach thu hai:" << endl;
                int x;
                cout << "Nhap so luong phan tu: ";
                cin >> x;
                cout << "Nhap " << x << " gia tri: ";
                for (int i = 0; i < x; ++i) {
                    int value;
                    cin >> value;
                    chenx(F2, value);
                }
                cout << "Danh sach thu hai: ";
                duyet(F2);
                cout << endl;
                cout << "Phan giao cua hai danh sach: ";
                F3 = giao(F1, F2);
                duyet(F3);
                cout << endl;
                system("pause");
                break;
            }
            case 0: {
                cout << "Ket thuc chuong trinh!" << endl;
                break;
            }
            default: {
                cout << "Lua chon khong hop le!" << endl;
                break;
            }
        }
    } while (choice != 0);

    return 0;
}

