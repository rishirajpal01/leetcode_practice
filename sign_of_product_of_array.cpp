#include <bits/stdc++.h>
using namespace std;

int arraySign(vector<int>& nums) {
    double ans = 1;
    for (auto i=0; i<nums.size(); i++){
        if (nums[i]>0)
            ans *= 1;
        else if (nums[i]<0)
            ans *= -1;
        else if (nums[i]==0)
            ans *= 0;
        }
    return ans;
}

int main(){
    vector<int> arr = {-1,-2,-3,-4,3,2,1};
    std::cout<<arraySign(arr);
    return 0;
}
