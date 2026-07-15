#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void bubbleSort(vector<int> &arr, int n){
	if(n==1){return;}
	int i=0;int swaps=0;
	while(i<n-1){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
			swaps=1;
		}
		i++;
	}
	if(swaps==0){return;}
	bubbleSort(arr,n-1);
}

int main(){
	vector<int> arr = {5,2,4,9,8,1};
	bubbleSort(arr,6);
	for(auto i:arr){
		cout<<i<<" ";
	}
	cout<<endl;
}
