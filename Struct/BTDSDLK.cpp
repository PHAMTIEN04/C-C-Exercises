#include <iostream>
#include <cstring>
using namespace std;

typedef char St25[25];
typedef char St8[8];

struct HocSinh{
    int MaHS;
    St25 HoTen;
    St8 NgaySinh;
    HocSinh *Next;
};

struct Lop{
    Lop *Down;
    St8 TenLop;
    HocSinh *DSHS;
};

Lop *DiaChi(Lop *F, St8 Blop){
    if(F == NULL){
        return NULL;
    }
    else{
        Lop *q = F;
        while(q != NULL && strcmp(q->TenLop, Blop) != 0){
            q = q->Down;
        }
        return q;
    }
}

void  InDSHS(Lop *F, St8 Blop){
    if(F != NULL){
        Lop *p = DiaChi(F,Blop);
        if(p != NULL){
            HocSinh *first = p->DSHS;
            HocSinh *q;
            int i = 1;
            for(q = first;q != NULL;q = q->Next){
                cout << i << " "<< q->MaHS << " " << q->HoTen << " " << q->NgaySinh << endl;
                i++;
            }
        }
        else{
            cout << "Khong tim thay lop " << Blop << endl;
        }
    }
}

int SiSo(Lop *F, St8 Blop){
    Lop *p = DiaChi(F,Blop);
    if(p == NULL){
        return 0;
    }
    else{
        HocSinh *first = p->DSHS;
        HocSinh *q;
        int cnt = 0;
        for(q = first;q != NULL;q = q->Next){
            cnt++;
        }
        return cnt;
    }
}

void InSiSoCacLop(Lop *F){
    if(F != NULL){
        int i = 1;
        int sum = 0;
        for(Lop *p = F;p != NULL;p=p->Down){
            HocSinh *first = p->DSHS;
            int cnt = 0;
            for(HocSinh *q = first;q != NULL;q =q->Next){
                cnt++;
            }
            cout << i << ". " << p->TenLop << ":" << cnt << "HS\n";
            sum += cnt;
        }
        cout << "Tong cong:"<<sum << "HS\n";
    }
}

void BoSung(Lop *&F, St8 Blop, int Bmahs, St25 Bhoten, St8 Bngaysinh) {
    Lop *p = DiaChi(F, Blop);
    if (p == NULL) { 
        Lop *newLop = new Lop;
        strcpy(newLop->TenLop, Blop);
        newLop->Down = F;
        F = newLop;
        newLop->DSHS = new HocSinh;
        newLop->DSHS->MaHS = Bmahs;
        strcpy(newLop->DSHS->HoTen, Bhoten);
        strcpy(newLop->DSHS->NgaySinh, Bngaysinh);
        newLop->DSHS->Next = NULL;
    } else {
        HocSinh *q = p->DSHS;
        HocSinh *prev = NULL;
        while (q != NULL && q->MaHS != Bmahs) {
            prev = q;
            q = q->Next;
        }
        if (q == NULL) { 
            HocSinh *newHS = new HocSinh;
            newHS->MaHS = Bmahs;
            strcpy(newHS->HoTen, Bhoten);
            strcpy(newHS->NgaySinh, Bngaysinh);
            newHS->Next = NULL;
            if (prev == NULL) {
                p->DSHS = newHS;
            } else {
                prev->Next = newHS;
            }
        } else { 
            strcpy(q->HoTen, Bhoten);
            strcpy(q->NgaySinh, Bngaysinh);
        }
    }
}

void XoaHS(HocSinh *&L, int Bmahs) {
    HocSinh *current = L;
    HocSinh *prev = NULL;

    while (current != NULL && current->MaHS != Bmahs) {
        prev = current;
        current = current->Next;
    }

    if (current == NULL) { 
        return;
    }

    if (prev == NULL) { 
        L = current->Next;
    } else {
        prev->Next = current->Next;
    }

    delete current;
}

void Xoa(Lop *&F, St8 Blop, int Bmahs) {
    Lop *p = DiaChi(F, Blop);
    if (p == NULL) { 
        return;
    }

    HocSinh *q = p->DSHS;
    HocSinh *prev = NULL;

    while (q != NULL && q->MaHS != Bmahs) {
        prev = q;
        q = q->Next;
    }

    if (q == NULL) { 
        return;
    }

    XoaHS(p->DSHS, Bmahs); 

 
    if (p->DSHS == NULL) {
        F = p->Down;

        delete p;
    }
}

void PrintMenu() {
    cout << "Menu:" << endl;
    cout << "1. In danh sach hoc sinh cua lop" << endl;
    cout << "2. In si so cua cac lop" << endl;
    cout << "3. Bo sung hoac cap nhat thong tin hoc sinh" << endl;
    cout << "4. Xoa hoc sinh" << endl;
    cout << "5. Thoat" << endl;
    cout << "Lua chon cua ban: ";
}

int main(){
    Lop *F = NULL;

    while (true) {
        PrintMenu();
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                St8 lop;
                cout << "Nhap ten lop: ";
                cin >> lop;
                InDSHS(F, lop);
                break;
            }
            case 2:
                InSiSoCacLop(F);
                break;
            case 3: {
                St8 lop;
                int maHS;
                St25 hoten;
                St8 ngaysinh;
                cout << "Nhap ten lop: ";
                cin >> lop;
                cout << "Nhap ma hoc sinh: ";
                cin >> maHS;
                cout << "Nhap ho ten: ";
                cin.ignore();
                cin.getline(hoten, 25);
                cout << "Nhap ngay sinh: ";
                cin >> ngaysinh;
                BoSung(F, lop, maHS, hoten, ngaysinh);
                break;
            }
            case 4: {
                St8 lop;
                int maHS;
                cout << "Nhap ten lop: ";
                cin >> lop;
                cout << "Nhap ma hoc sinh can xoa: ";
                cin >> maHS;
                Xoa(F, lop, maHS);
                break;
            }
            case 5:
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
    }

    return 0;
}

