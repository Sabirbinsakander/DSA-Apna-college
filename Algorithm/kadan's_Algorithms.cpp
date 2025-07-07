#include <bits/stdc++.h>
using namespace std;
int main()
{
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for(int val : nums){
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};
    return 0;
}
