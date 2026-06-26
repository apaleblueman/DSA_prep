#include <iostream>
#include <cmath>
using namespace std;


//bruteforce approach
int count_digits(int n){
	int N = 0;
	while(n>0){
		n = n/10;
		N++;
	}
	return N;
	
}
//optimal approach
int count_digits_optimally(int num){
	int N = log10(num) + 1;
	return N;
}
int main(){
	int num = 44040;
	cout<<count_digits(num)<<"count using bruteforce"<<endl;
	num = 21130;
	cout<<count_digits_optimally(num)<<"count using optimal approach"<<endl;


}
