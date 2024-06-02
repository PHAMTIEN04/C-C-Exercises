#include <bits/stdc++.h>

using namespace std;
int fun1(int x,int y){
	if(x==0){
		return y;
	}
	else{
		return fun1(x-1,x+y);
	}
}
int fun2(int x,int y){
	if(y==0){
		return 0;
	}
	else{
		if(y>0){
			cout << y << " ";
			return (x+fun2(x,y-1));
			
		}
		else{
			return -fun2(x,-y);
		}
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fun1(5,2) << endl << fun2(4,3);
	cout << 5*2 + 4 * 2 + 3 * 2 + 2 * 2 + 1;

	return 0;
}

