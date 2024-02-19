#include <bits/stdc++.h>
using namespace std;

struct L {
    string theloai;
    struct T {
        int sohieu;
        string tensach;
        string tacgia;
        int nxb;
        struct T *next_t;
    };
    struct T *head_t;
    struct L *next_l;
};

typedef struct L *node_l;
typedef struct L::T *node_t;

node_l makenode_l(string tl) {
    node_l tmp_l = new L();
    tmp_l->theloai = tl;
    tmp_l->next_l = NULL;
    tmp_l->head_t = NULL; 

    return tmp_l;
}

node_t makenode_t(int sh, string ts, string tg, int nxb) {
    node_t tmp_t = new L::T();
    tmp_t->sohieu = sh;
    tmp_t->tensach = ts;
    tmp_t->tacgia = tg;
    tmp_t->nxb = nxb;
    tmp_t->next_t = NULL;

    return tmp_t;
}

void InsertLast_t(node_t &b, int sh, string ts, string tg, int nxb) {
    node_t tmp_t = makenode_t(sh, ts, tg, nxb);
    if (b == NULL) {
        b = tmp_t;
    } else {
        node_t p = b;
        while (p->next_t != NULL) {
            p = p->next_t;
        }
        p->next_t = tmp_t;
    }
}

void InsertLast_l(node_l &a, node_t &b) {
    cout << "Nhap tai lieu: ";
	string tl;
    getline(cin, tl);
    node_l tmp_l = makenode_l(tl);
    int n;
    cout << "Nhap so luong danh sach: ";
    cin >> n;
    cin.ignore();
    while (n--) {
        int sh;
        string ts;
        string tg;
        int nxb;
		cout <<"Nhap so hieu: ";
        cin >> sh;
        cin.ignore();
        cout <<"Nhap ten sach: ";
        getline(cin, ts);
        cout <<"Nhap tac gia: ";
        getline(cin, tg);
        cout <<"Nhap nam xuat ban: ";
        cin >> nxb;
        cin.ignore();
        InsertLast_t(tmp_l->head_t, sh, ts, tg, nxb);
    }

    if (a == NULL) {
        a = tmp_l;
    } else {
        node_l p = a;
        while (p->next_l != NULL) {
            p = p->next_l;
        }
        p->next_l = tmp_l;
    }
}

void in(node_l a) {
    node_l p = a;

    while (p != NULL) {
        cout << p->theloai << endl;
        node_t q = p->head_t;
        while (q != NULL) {
            cout << q->sohieu << " " << q->tensach << " " << q->tacgia << " " << q->nxb << " ";
            q = q->next_t;
        }
        cout << endl;
        p = p->next_l;
    }
    cout << endl;
}
void demsach(node_l a,string tg, string tl){
	node_l p = a;
	int cnt=0;
    while (p != NULL) {
//        cout << p->theloai << " ";
        node_t q = p->head_t;
        while (q != NULL) {
        	if(q->tacgia == tg && p->theloai == tl){
        		cnt++;
			}
//            cout << q->sohieu << " " << q->tensach << " " << q->tacgia << " " << q->nxb << " ";
            q = q->next_t;
        }
        cout << endl;
        p = p->next_l;
    }
    cout << "So sach cua tac gia "<< tg << " voi the loai "<<tl <<" la: "<< cnt;
}
void ThemSach(node_l &TV, string tsach, string tgia, int shieu, int nxban, string thloai) {
    cout << endl;
	node_l p = TV;
    while (p != NULL) {
        if (p->theloai == thloai) { 
            InsertLast_t(p->head_t, shieu, tsach, tgia, nxban);
            return;
        }
        p = p->next_l;
    }

    node_t b = NULL;
    InsertLast_t(b, shieu, tsach, tgia, nxban);
    InsertLast_l(TV, b);
}

node_t SachSomNhat(node_l TV) {
    node_l p = TV;
    node_t sach_som_nhat = NULL;
    int min_nxb = INT_MAX;

    while (p != NULL) {
        node_t q = p->head_t;
        while (q != NULL) {
            if (q->nxb < min_nxb) {
                min_nxb = q->nxb;
                sach_som_nhat = q;
            }
            q = q->next_t;
        }
        p = p->next_l;
    }

    return sach_som_nhat;
}


int TimSach(node_l TV, string tsach, string tgia, string thloai) {
    node_l p = TV;
    while (p != NULL) {
        if (p->theloai == thloai) {
            node_t q = p->head_t;
            while (q != NULL) {
                if (q->tensach == tsach && q->tacgia == tgia) {
                    return 1; 
                }
                q = q->next_t;
            }
        }
        p = p->next_l;
    }
    return 0; 
}

void LoaiSach(node_l &TV, string tsach, string tgia, string thloai) {
    node_l p = TV;
    while (p != NULL) {
        if (p->theloai == thloai) {
            node_t prev = NULL;
            node_t q = p->head_t;
            while (q != NULL) {
                if (q->tensach == tsach && q->tacgia == tgia) {
                    if (prev == NULL) {
                        p->head_t = q->next_t;
                        delete q;
                        return;
                    } else {
                        prev->next_t = q->next_t;
                        delete q;
                        return;
                    }
                }
                prev = q;
                q = q->next_t;
            }
        }
        p = p->next_l;
    }
}

int main() {
    node_l list = NULL;
    InsertLast_l(list, list->head_t);
    InsertLast_l(list, list->head_t);

    in(list);
    demsach(list, "A", "Toan");
    
    ThemSach(list, "Sach Vu tru", "tiendeptrai", 123, 2024, "Hmm");
    
    node_t sach_som_nhat = SachSomNhat(list);
    if (sach_som_nhat != NULL) {
        cout << "Sach xuat ban som nhat: ";
        cout << sach_som_nhat->tensach << " " << sach_som_nhat->tacgia << " " << sach_som_nhat->nxb << endl;
    } else {
        cout << "Danh sach trong!" << endl;
    }
    
    if (TimSach(list, "Toan", "A", "A")) {
        cout << "Sach ton tai trong danh sach!" << endl;
    } else {
        cout << "Sach khong ton tai trong danh sach!" << endl;
    }
    
    LoaiSach(list, "A", "A", "Toan");
    
    return 0;
}


