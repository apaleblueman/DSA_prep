#include<iostream>
#include<string>
#define MAX_SIZE 100000
using namespace std;
int main(){
	string s;
	cout<<"Enter a string:";
	cin>>s;

	int hash[256] = {0};
	for(int i=0;i<s.size();i++){
		hash[s[i]]++;
	}
	char q;
	while(true){
		cout<<"enter query:";
		cin>>q;
		cout<<hash[q]<<endl;
	}
	return 0;
}
