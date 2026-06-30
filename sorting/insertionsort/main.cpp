#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr){
	for(int i=1;i<arr.size();i++){
 		int temp = arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp){
			cout<<j<<" ";
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
		cout<<endl<<"endj:"<<j<<endl;
	}
}
int main(){
	vector<int> arr = {5,4,3,2,1};
	insertionSort(arr);
	for(auto i: arr){cout<<i<<",";}
}

