#include<iostream> 
#include<vector> 
using namespace std;
bool check(vector<int> &nums){
        int drops=0;
        for(int i=0;i<nums.size()-1;i++){
                        if(nums[i]<=nums[i+1]) continue;
                        else drops++;
            }
        if((drops==1) && (nums[0]>=nums.back())){
            return true;
            }
        else if(drops==0) return true;
        return false;
} 
int main(){
	
	return 0;
}

