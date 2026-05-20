#include <iostream>
using namespace std;

int check_GCD(int num1, int num2){
	int a,b,temp;
	a = num1;
	b = num2;
	if(num1>num2){
		b = num2;
		a = num1;
	}
	while(a%b!=0){
		temp = b;
		b = a % b;
		a = temp;
	}
	return b;
}

int main(){
	int a,b;
	cout<<"enter two numbers to check their GCD separated by spaces:";
	cin>>a>>b;
	cout<<check_GCD(a,b);

}
