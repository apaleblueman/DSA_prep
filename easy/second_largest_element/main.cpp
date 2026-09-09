#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findSecondLargest(vector<int> &arr){
	int max=INT_MIN;
	int maxless=INT_MIN;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==max){
			continue;
		}
		else if(arr[i]>max){
			maxless = max;
			max = arr[i];
		}
		else if(arr[i]>maxless){
			maxless=arr[i];
		}
	}
	if(maxless==INT_MIN) return -1;
	return maxless;
}
int findSecondSmallest(vector<int> &arr){
	int min = INT_MAX;
	int minless = INT_MAX;
	for(int i=0;i<arr.size();i++){
		if(arr[i] == min){continue;}
		else if(arr[i]<min){
			minless=min;
			min=arr[i];
		}else if(arr[i]<minless){
			minless=arr[i];
		}
	}
	if(minless==INT_MAX) return -1;
	return minless;
}

int main(){
	vector<int> arr =  {1}  ;
	cout<<"Second Largest element is:"<<findSecondLargest(arr)<<endl;
	cout<<"Second Smallest element is:"<<findSecondSmallest(arr);

}
