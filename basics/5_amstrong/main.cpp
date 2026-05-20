#include <iostream>
#include <cmath>
using namespace std;

bool chk_ams(int num){
	int ognum = num;
	int count = log10(num)+1;
	int ams = 0;
	int digit;
	while(num>0){
		digit = num % 10;
		ams += pow(digit,count);
		num = num/10;
	}
	if(ams == ognum){
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
		return 0;
	}
	cout<<"not armstrong"<<endl;	
	return 0;
}
