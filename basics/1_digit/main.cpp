#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//bruteforce approach
int count_digits(int num){
	int count=0;
	while(num>0){
		num = num /10;
		count++;
	}
	return count++;
}
//optimal approach
int count_digits_optimally(int num){
	int count = log10(num)+1;
	return count;
}
int main(){
	int num = 1000;
	cout<<count_digits(num)<<"count using bruteforce"<<endl;
	num = 2113;
	cout<<count_digits_optimally(num)<<"count using optimal approach"<<endl;


}
