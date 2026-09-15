#include<iostream>
#include<vector>
using namespace std;

int findLargest(vector<int> &arr){
	int max=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	vector<int> arr = {2, 5, 1, 3, 0};
	int max = findLargest(arr);
	cout<<"Largest element is:"<<max;
}
