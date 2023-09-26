#include <iostream>
using namespace std;
class hcn{
	private:
		int width;
		int length;
	public:
		void khoitao();
		void hienthi();
		int chuvi();
		int dientich();
};
void hcn::khoitao(){
	cout << "**Input**\n";
	cout << "Chieu dai: ";
	cin >> length;
	cout << "Chieu rong: ";
	cin >> width;
}
void hcn::hienthi(){
	cout << "**Output**\n";
	cout << "Chieu dai: "<< length<<endl;
	cout << "Chieu rong: "<< width<<endl;
	cout << "Chu vi: "<< chuvi()<<endl;
	cout << "Dien tich: "<< dientich()<<endl;
}
int hcn::chuvi(){
	return (length + width ) * 2;
}
int hcn::dientich(){
	return length * width;
}
int main(){
	hcn h;
	h.khoitao();
	h.hienthi();
	h.chuvi();
	







	return 0;
}

