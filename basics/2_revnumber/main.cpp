#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int num) {
        long revnum=0;
        while(num!=0){
		if(revnum >= (INT_MAX/10)){ return 0; }
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
	//cout<<INT_MAX<<" "<<INT_MIN;
}
