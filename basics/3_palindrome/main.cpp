#include<iostream>
using namespace std;

bool palindrome(int num){
	int ognum = num;
	int revnum=0;
	while(ognum!=0){
		revnum = (ognum%10) + (revnum*10);
		ognum = ognum / 10;
	}
	cout<<revnum<<endl;
	if(revnum == num){
		return true;
	}
	else{
		return false;
	}
	
}
int main(){
	int num;
	cout<<"Enter a number to check if its a palindrome:";
	cin>>num;
	if(palindrome(num)){
		cout<<"palindrome";
	}
	else{
		cout<<"not a palindrome";
	}
}
