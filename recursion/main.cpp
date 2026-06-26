#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

void Name(string name, int N){
	if(N<1){return;}
	cout<<N<<name<<endl;
	Name(name , N-1);
}

void nums(int N){
	if(N<1){return;}
	nums(N-1);
	cout<<N<<endl;
}
int sum(int N){
	if(N<=0){return 0;}
	return N + sum(N-1);
}
int facto(int N){
	if(N<=1){return 1;}
	return N * facto(N-1);
}
void reverseArray(vector<int>& arr){
	int start=0, end=arr.size()-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;end--;
	}
}

bool checkPalindrome(string& str,int start, int end){
	if(start>=end){return true;}
	if(str[start]!=str[end]){return false;}
	return checkPalindrome(str,start+1,end-1);
}

int fibo(int n){
	if(n<=1){return n;}
	return	fibo(n-1)+fibo(n-2);
}
int main(){
	Name("chico",10);
	nums(10);
	cout<<sum(6)<<endl;
	cout<<facto(5)<<endl;
	vector<int> arr={1,2,3,4,5};
	reverseArray(arr);
	for(auto i:arr){
		cout<<i<<",";
	}
	cout<<endl;
	string str = "racecar";
	if(checkPalindrome(str,0,str.size()-1)){
		cout<<"yes, palindrome";
	}
	else{
		cout<<"not palindrome";
	}
	cout<<endl;
	cout<<fibo(4);
  	return 0;
}
