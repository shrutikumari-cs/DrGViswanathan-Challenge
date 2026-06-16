//Remove Duplicates

#include <iostream>
#include <vector>
using namespace std;
int removeDuplicate(vector <int> & nums){
    if (nums.empty())
       return 0;
    int i = 0;
    for (int j=1; j<nums.size(); j++){
        if (nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
int main(){
    vector<int> nums = {2,2,2,4,5,5};
     int k = removeDuplicate(nums);

    cout << "Unique Count: " << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
