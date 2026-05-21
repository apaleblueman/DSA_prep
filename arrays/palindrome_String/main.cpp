#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isPalindrome(string s) {
        string rev;
        string og;
        for(int i=s.size()-1;i>=0;i--){
            if(isalpha(tolower(s[i]))){
                    og.push_back(s[i]);
                    rev.push_back(s[i]);
            }
        }
        //if(rev.compare(og)){return true;}
	for (char ch : s) {
        cout << ch ;
  	}
	cout<<endl;
	for (char ch : og) {
        cout << ch ;
  	}
	cout<<endl;
	for (char ch : rev) {
        cout << ch ;
  	}
        return false;
    }

int main(){
	string str = "A#B9A";
	isPalindrome(str);
	
}
