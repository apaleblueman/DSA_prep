#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void selectionsort(vector<int> &arr){
	int minIndex = 0;
	for(int i=0;i<arr.size();i++){
			minIndex = i;
			for(int j=i+1;j<arr.size();j++){
				if(arr[j] < arr[minIndex]){
					swap(arr[j],arr[minIndex]);
				}	
			}
		
	}
}
int main(){
	vector<int> sortme = {12,3,2,33,5,77,8};
	for(auto i: sortme){
		cout<<i<<" ";
	}
	selectionsort(sortme);
	cout<<endl;
	for(auto i: sortme){
		cout<<i<<" ";
	}
	return 0;
}


//PS: i spent 20 mins debugging this code before i realized i was passing my vector by value not by reference[*_*]

