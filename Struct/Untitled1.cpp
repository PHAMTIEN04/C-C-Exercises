#include <bits/stdc++.h>

using namespace std;
int main(){
	
	int chiso[6] = {0};
	while(true){
		int check = 0;
		
		for(int i = 0 ; i<6;i++){
		
		if(i > 3){
			check = check+2;
			cout <<i-check<<" ";
		}
		else{
		cout << i <<" ";
		}
		chiso[i] = i;
	}

	}

	cout << endl;
	for (int i = 0; i < 6;i++){
		cout << chiso[i] << " ";
	}


	return 0;
}

