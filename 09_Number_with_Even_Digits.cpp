//Numbers with Even Digits

#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int answer = 0;

    for (int num : nums) {
        int count = 0;

        while (num > 0) {
            num = num / 10;
            count++;
        }

        if (count % 2 == 0)
            answer++;
    }

    return answer;
}

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << findNumbers(nums) << endl;

    return 0;
}
