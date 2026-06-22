#include<iostream>
using namespace std;

bool palindrome(int num){
	int revnum,digit,ognum;
	ognum = num;
	while(num>0){
		digit=num % 10;
		revnum=(revnum*10) + digit;
		num=num / 10;
	}
	if(revnum == ognum)
	{
		return true;
	}else{
		return false;
	}
}
int main(){
	int num;
	cout<<"Enter a number to check if its a palindrome:";
	cin>>num;
	if(palindrome(num) == true){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not a palindrome"<<endl;
	}
}

