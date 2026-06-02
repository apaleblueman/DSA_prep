#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> arr = {10,2,3,5,7,1,0};
	for(int i=1;i<arr.size();i++){
		int key = arr[i];
		int j=i;
		while(j>0 && key<arr[j-1]){
			arr[j] = arr[j-1];
			j--;
		}	
		arr[j]=key;
	}
	for(auto i: arr){cout<<i<<",";}
}

