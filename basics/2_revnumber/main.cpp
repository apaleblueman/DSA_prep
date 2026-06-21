#include<iostream>
using namespace std;
    int reverse(int x) {
        int digit,revnum=0;
	while(x > 0){
		digit = x % 10;
		revnum = revnum*10 + digit;
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
