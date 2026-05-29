#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int> &arr){
	for(int i=0;i<arr.size();i++){
		for(int j=i;j<arr.size();j++){
			if(arr[j] < arr[i]){
				swap(arr[j],arr[i]);
			}
		}
	}
}
int main(){
	vector<int> sortme = {12,3,2,33,5,77,8};
	selectionsort(sortme);
	for(auto i: sortme){
		cout<<i<<" ";
	}
	
	
	return 0;
}


//PS: i spent 20 mins debugging this code before i realized i was passing my vector by value not by function [*_*]

