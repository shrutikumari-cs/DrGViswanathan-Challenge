#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size() - 1;
    while(left<=right) {
        int mid = ((left+right)/2);
        if (nums[mid] == target){
            return mid;
        }else if (nums[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {-1,0,3,6,8,9};
    int target = 9;
    cout<< search(nums,target)<<endl;
    return 0;
}