#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector <int> &arr){
	int sorted=arr.size();
	bool swapped;
	for(int i=0;i<arr.size();i++){
		swapped = false;
		for(int j=0;j<sorted-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped){return;}
		sorted = sorted -1;
	}
	cout<<endl;
}

int main(){
        vector<int> arr = {17,8,16,2,11,15,20};
        bubbleSort(arr);
        for(int i=0;i<6;i++){cout<<arr[i]<<" ";}
        return 0;
}
