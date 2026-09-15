#include<iostream> 
#include<vector> 
using namespace std;
int removeDuplicates(vector<int>& nums) {
	int i=1;
	for(int j=1;j<nums.size();j++){
		if(nums[j]!=nums[i-1]){
			nums[i]=nums[j];
			i++;
		}
	}
	return i;
}
int main(){
	vector<int> arr={0,0,1,1,1,2,2,3,3,4};
	int k = removeDuplicates(arr);
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(auto i:arr){
		cout<<i<<" ";
	}
	return 0;
}
