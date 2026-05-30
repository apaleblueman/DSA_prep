#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
	vector<int> arr = {17,8,16,11,15,20};
	vector<int>::size_type	counter=arr.size();
	for(auto i: arr){
		cout<<i<<",";	
	}
	int change_flag;
	cout<<endl;
	for(int i=0;i<counter;i++){
		change_flag=0;
       		for(vector<int>::iterator it=arr.begin(); it != arr.end()-1;it++){
        	if(*(it)>*(it+1)){
			swap(*(it),*(it+1));
			change_flag=1;
		}
		}
		if(change_flag == 0){break;}
	counter--;
	}
	
	for(auto i: arr){
		cout<<i<<",";	
	}
	return 0;
}

