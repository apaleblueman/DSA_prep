#include <iostream>
using namespace std;

int check_GCD(int num1, int num2){
	int min=0;
	while(num1!=0 && num2!=0){
		if(num1>num2){
			min = num1 - num2;
			num1 = min;
		}	
		else{
			min = num2 -num1;
			num2 = min;
		}
	}
	return num1+num2;
}
int main(){
	int a,b;
	cout<<"enter two numbers to check their GCD separated by spaces:";
	cin>>a>>b;
	cout<<"GCD of "<<a<<","<<b<<":"<<check_GCD(a,b);

}
