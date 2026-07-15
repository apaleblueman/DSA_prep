#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
		int i = low;
		int j = mid+1;
		vector<int> temp;
		while(i<= mid && j<=high){
			if(arr[i]<arr[j]){
				temp.push_back(arr[i]);
				i++;
			}else{
				temp.push_back(arr[j]);
				j++;
			}
		}
			if(i>mid){
				while(j<=high){
					temp.push_back(arr[j]);
					j++;
				}	
			}	
			if(j>high){
				while(i<=mid){
					temp.push_back(arr[i]);
					i++;
				}
			}	
		for(int i=0;i<temp.size();i++){
			arr[low+i] = temp[i];
		}
}

void mergeSort(vector<int> &arr,int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		mergeSort(arr,low,mid);	
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main(){
	vector<int> arr = {2,3,1,7,4,9};
	mergeSort(arr,0,5);
	for(int i: arr){
		cout<<i<<" ";
	}
	return 0;
}
