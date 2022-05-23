#include <bits/stdc++.h> 
using namespace std;

int largestPerimeter(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i=nums.size()-1; i>1; i--){
        if (nums[i-1] + nums[i-2] > nums[i]){
            return (nums[i]+nums[i-1]+nums[i-2]);
        }
    }
    return 0;
}

int main() 
{ 
    vector<int> arr = { 3,2,3,4 }; 
    std::cout<<largestPerimeter(arr)<<endl; 
    return 0;
}