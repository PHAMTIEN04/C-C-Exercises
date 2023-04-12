// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Tro{
    int nd;
    Tro *link;
};
Tro*first =NULL;
void chenDau(int x, Tro &first){
    Tro* p= new Tro;
    p ->nd= x;
    p ->link = first;
    first =p;
   
}
//void inan (Tro*first){
//    if(first != NULL){
//       if(first->nd%2==0) cout<<first->nd<<"\t";
//        inan(first->link);
//       
//        }
//}
int tinhTong(Tro*first){
    if(first != NULL){
        return first->nd+ tinhTong(first->link);
    }else return 0;
}
int main(int argc,char** argv){
    int n;
    cin>> n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
       
        chenDau(x,first);
     
    }
   
    cout<<tinhTong(first);
   
   

    return 0;
}
