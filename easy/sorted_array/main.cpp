#include<iostream> 
#include<vector> 
using namespace std;
bool isSorted(vector<int> &arr,int order){
	//order - asc(0) or dsc(1)
	for(int i=0;i<arr.size()-1;i++){
		if(order==0){
			if(arr[i]<arr[i+1]) continue;
			else return false;	
		}else{
			if(arr[i]>arr[i+1]) continue;
			else return false;
		}
	}
	return true;
}

int main(){
	vector<int> arr = {1,2,3,4,5};
	cout<<isSorted(arr, 1);
	return 0;
}

