#include <iostream>
#include <cmath>
using namespace std;

bool chk_ams(int num){
	int n = log10(num)+1;
	int anum = 0;
	int temp = num;
	int demp;
	while(temp>0){
		demp = pow(temp%10,n);
		anum = anum + demp;
		temp = temp/10;
	//	cout<<"temp:"<<temp<<",demp:"<<demp<<endl;
	}
	if(anum == num){
		return true;
	}
	return false;
}

int main(){
	int num;
	cout<<"enter a number";
	cin>>num;
	if(chk_ams(num)){
		cout<<"armstrong"<<endl;
	}
	else{
	cout<<"not armstrong"<<endl;	
	}
	return 0;
}
