#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int reverse(int num) {
        int count=log10(num)+1, revnum=0;
        while((num%10)!=0){
            revnum+= ((num%10)* pow(10,count-1));
	    num = num /10;
            count--;

        }
        return revnum;
    }
int main(){
	int num;
	cout<<"enter number to reverse:"<<endl;
	cin>>num;
	cout<<reverse(num)<<endl;
}

