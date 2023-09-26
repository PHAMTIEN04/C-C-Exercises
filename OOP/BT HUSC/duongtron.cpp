#include <iostream>
class duongtron{
	private:
		float r;
//		int x;
//		int y;
	public:
		float dientich();
//		{
//			return 3.14 *(r*r);
//		}
		void khoitao(float r);
//		{
//			this->r = r;
//		}
		void hienthi();
//		{
//			std::cout << "Duong tron ban kinh r=" << this->r << std::endl;
//		}
		
};
void duongtron::khoitao(float r){
	this->r = r;
		}
		
float duongtron::dientich(){
			return 3.14 *(r*r);
		}
void duongtron::hienthi(){
			std::cout << "Duong tron ban kinh r=" << this->r << std::endl;
		}

int main(){
	duongtron d1;
	d1.khoitao(20);
	d1.hienthi();
	std::cout<<d1.dientich();







	return 0;
}

