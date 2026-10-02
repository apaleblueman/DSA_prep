#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int> &nums, int k){
    int times = k%nums.size();
    int temp;
    for(int j=0;j<times;j++){
        temp = nums.back();
        for(int i=nums.size()-1;i>0;i--){
            nums[i]=nums[i-1];
        }
        nums[0]=temp;
    }
}
int main(){
	vector<int> arr = {1,2,3,4,5};
	rotate(arr,3);
	for(auto i:arr){
		cout<<i<<" ";
	}
	return 0;
}

