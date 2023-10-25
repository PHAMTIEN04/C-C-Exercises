#include <bits/stdc++.h>

using namespace std;
class Test{
	private:
		int x;
	protected:
		int y;
	public:
		void xuat(){
			cout << "Xuat" << endl;
		}
};

class T:private Test{
	public:
		void vailin(){
			xuat();
//			x = 2;
			y = 2;
		}
};

int main(){
	T t1;
	t1.vailin();
	


	return 0;
}

