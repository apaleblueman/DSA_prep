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
bool checkPalindrome(string& str){
	int start=0, end=str.size()-1;
	while(start<end){
		if(str[start]==str[end]){
			start++;end--;
		}
		else{
			return false;
		}
	}
	return true;
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
	string str = "abba a  abba";
	if(checkPalindrome(str)){
		cout<<"yes, palindrome";
	}
	else{
		cout<<"not palindrome";
	}
	
  	return 0;
}
