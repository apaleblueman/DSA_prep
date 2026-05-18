#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int num) {
        int revnum=0;
        while(num!=0){
		cout<<num<<"-"<<revnum<<endl;
		revnum = (num % 10) + revnum*10;
		num = num / 10;
	}
        return revnum;
    }
int main(){
	int num;
	cout<<"enter number to reverse:"<<endl;
	cin>>num;
	cout<<reverse(num)<<endl;
}
