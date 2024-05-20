#include <bits/stdc++.h>

using namespace std;

int main(){
	double x,y,z,s; cin >> x >> y >> z >> s;
	cout<< setprecision(6) << fixed;
	double sum = x + y + z;
	if(sum){
	    cout << sum * x / s << " " << sum * y/ s << " " << sum * z / s << endl;
	    
	}
	else{
	    cout << 0.0 <<" " << 0.0<< " " << 0.0 << endl;
	}


	return 0;
}

