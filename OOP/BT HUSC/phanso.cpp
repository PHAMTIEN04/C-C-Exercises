#include <iostream>
class phanso{
	private:
		int tu;
		int mau;
	public:
		phanso(int t , int m):tu(t),mau(m){};
		void khoitao();
		void hienthi();
		float cong(phanso &ps1);
};
//void phanso::khoitao(){
//	std::cout << "**Input**\n";
//	std::cout << "Tu: ";
//	std::cin >> tu;
//	std::cout << "Mau: ";
//	std::cin >> mau;
//}
void phanso::hienthi(){
	std::cout << "**Output**\n";
	std::cout << "Tu: "<<tu<<std::endl;
	std::cout << "Mau: "<<mau<<std::endl;
}
float phanso::cong(phanso &ps1){
	return (tu*ps1.mau + ps1.tu * mau) / mau * ps1.mau;
}
int main(){
//	int n; std::cin >> n;
	phanso ps(3,4);
	phanso ps1(3,4);
//	ps.khoitao();
//	ps.hienthi();
	std::cout<<"Cong: "<< ps.cong(ps1);
	
	
//	for(int i = 0 ; i < n; i++){
//		ps[i].khoitao();
//	}
//	for(int i = 0 ; i < n;i++){
//		ps[i].hienthi();
//	}







	return 0;
}

