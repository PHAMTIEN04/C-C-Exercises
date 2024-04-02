#include <iostream>
using namespace std;

struct Nut{
    int info;
    Nut *left;
    Nut *right;
};

Nut* khoitao(int x){
    Nut* p = new Nut;
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void themnut(Nut *&T,int x){
    if(T == NULL){
        Nut *p = khoitao(x);
        T = p;
    }
    else{
        if(T->info > x ){
            themnut(T->left,x);
        }
        else{
            themnut(T->right,x);
        }
    }
}

void duyetnlr(Nut *T){
    if(T != NULL){
        cout << T->info << " ";
        duyetnlr(T->left);
        duyetnlr(T->right);
    }
}

void ditimnuthemang(Nut *&x,Nut *&y){
    if(y->left != NULL){
        ditimnuthemang(x,y->left);
    }
    else{
        x->info = y->info;
        x = y;
        y = y->right;
    }
}

void xoa(Nut *&T,int x){
    if(T == NULL){
        return;
    }
    else{
        if(T -> info > x){
            xoa(T->left,x);
        }
        else if(T->info < x){
            xoa(T->right,x);
        }
        else{
            Nut *x = T;
            if(T->left == NULL){
                T = T->right;
            }
            else if(T->right == NULL){
                T = T->left;
            }
            else{
                Nut *y = T->right;
                ditimnuthemang(x,y);
            }
            delete x;
        }
    }
}

Nut* timkiem(Nut* T,int x){
    if(T != NULL){
        if(T->info > x){
            return timkiem(T->left,x);
        }
        else if(T->info < x){
            return timkiem(T->right,x);
        }
        else{
            return T;
        }
    }
    return NULL; 
}

int chieucao(Nut *T){
    if(T == NULL){
        return 0;
    }
    else{
        return max(chieucao(T->left),chieucao(T->right))+1;
    }
}

void xoaall(Nut *&T){
    if(T != NULL){
        xoaall(T->left);
        xoaall(T->right);
        delete T;
        T = NULL;
    }
}

int timmaxa(Nut *T){
    if(T != NULL){
        if(T->right == NULL){
            return T->info;
        }
        else{
            return timmaxa(T->right);
        }
    }
}

int timmaxb(Nut *T){
    if(T != NULL){
        if(T->left==NULL && T->right == NULL){
            return T->info;
        }
        else{
            return max(T->info,max(timmaxb(T->left),timmaxb(T->right)));
        }
    }
}

static int cnt = 0;
int timnutnhanh(Nut *T,int &s){
    if(T != NULL){
        if(T->left == NULL && T->right == NULL){
            cnt++;
        }
        timnutnhanh(T->left,s);
        timnutnhanh(T->right,s);
    }
    return cnt;
}

Nut* TimNutCha(Nut* T, Nut* p) {
    if (T == NULL || T == p) {
        return NULL;
    }
    if (T->left == p || T->right == p) {
        return T;
    }
    Nut* nutChaBenTrai = TimNutCha(T->left, p);
    Nut* nutChaBenPhai = TimNutCha(T->right, p);
    if (nutChaBenTrai != NULL) {
        return nutChaBenTrai; 
    }
    return nutChaBenPhai; 
}

int TimMuc(Nut* T, Nut* p) {
    Nut* nutCha = TimNutCha(T, p);
    int muc = 0;
    while (p != nutCha) {
        if (p->info < nutCha->info) {
            p = p->right; 
        } else {
            p = p->left; 
        }
        muc++;
    }
    return muc;
}

bool kiemtra(Nut* T) {
    if (T == NULL) {
        return true;
    }
    bool benTraiLaCayBST = (T->left == NULL || (T->left->info < T->info && kiemtra(T->left)));
    bool benPhaiLaCayBST = (T->right == NULL || (T->right->info > T->info && kiemtra(T->right)));

    return benTraiLaCayBST && benPhaiLaCayBST;
}

Nut* timNutCoInfo(Nut* T, int x) {
    if (T == NULL || T->info == x) {
        return T;
    }
    if (x < T->info) {
        return timNutCoInfo(T->left, x);
    } else {
        return timNutCoInfo(T->right, x);
    }
}

void inGiamDan(Nut* T) {
    if (T != NULL) {
        inGiamDan(T->right);
        cout << T->info << " ";
        inGiamDan(T->left);
    }
}

Nut* saoChepCay(Nut* T) {
    if (T == NULL) {
        return NULL;
    }
    Nut* p = khoitao(T->info);
    p->left = saoChepCay(T->left);
    p->right = saoChepCay(T->right);
    return p;
}

int main(){
    Nut *t = NULL;
    int data;
    for(int i = 0 ; i < 10; i++){
        cout << "Nhap data: "; cin >> data; cin.ignore();
        themnut(t,data);
        cout << endl;
    }
    
    if(kiemtra(t)){
        cout << "Cay nhi phan tim kiem" << endl;
    }else{
        cout << "Khong phai" << endl;
    }
    
    cout << "Cay nhi phan duyet NLR: ";
    duyetnlr(t);
    cout << endl;
    
    xoa(t,15);
    cout << "Cay nhi phan sau khi xoa phan tu co gia tri 15: ";
    duyetnlr(t);
    cout << endl;
    
    cout << "Tim kiem phan tu co gia tri 3: ";
    Nut* ketQuaTimKiem = timkiem(t,3);
    if (ketQuaTimKiem != NULL) {
        cout << ketQuaTimKiem->info << endl;
    } else {
        cout << "Khong tim thay" << endl;
    }
    
    cout << "Chieu cao cua cay nhi phan: " << chieucao(t) << endl;
    
    cout << "Gia tri lon nhat cua cay nhi phan: " << timmaxa(t) << endl;
    
    cout << "Gia tri lon nhat cua cay nhi phan (phuong phap khac): " << timmaxb(t) << endl;
    
    int s = 0;
    cout << "So luong nut la trong cay: " << timnutnhanh(t, s) << endl;
    
    Nut *p = t->left->right;
    cout << "Muc cua nut " << p->info << " trong cay: " << TimMuc(t, p) << endl;
    
    int x;
    cout << "Nhap gia tri muon tim trong cay: ";
    cin >> x;
    Nut* nutTimDuoc = timNutCoInfo(t, x);
    if (nutTimDuoc != NULL) {
        cout << "Tim thay nut co gia tri " << x << " trong cay." << endl;
    } else {
        cout << "Khong tim thay nut co gia tri " << x << " trong cay." << endl;
    }
    
    cout << "In cac nut cua cay theo thu tu giam dan: ";
    inGiamDan(t);
    cout << endl;
    
    Nut* L = saoChepCay(t);
    cout << "Sao chep cay goc vao cay moi L, duyet cay L: ";
    duyetnlr(L);
    cout << endl;
    
    xoaall(t);
    cout << "Sau khi xoa toan bo cay goc." << endl;
    cout << "Duyet cay goc: ";
    duyetnlr(t);
    cout << endl;

    return 0;
}

