#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int reverse(int x) {
        int revnum=0;
        while(x!=0){
                if((revnum > (INT_MAX/10))||(revnum < (INT_MIN/10))){ return 0; }
                revnum = (x % 10) + revnum*10;
                x = x / 10;
        }
        return revnum;
    };
int main(){
	int num;
	cout<<"enter number to reverse:"<<endl;
	cin>>num;
	cout<<reverse(num)<<endl;
	//cout<<INT_MAX<<" "<<INT_MIN;
}
