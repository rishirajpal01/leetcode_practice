#include <bits/stdc++.h>
using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int diff = arr[1]- arr[0];
    for (int i=0, j=1; j<arr.size();){
        if (arr[j++] - arr[i++] != diff)
           return false;
    }
    return true;
}

int main(){
    vector<int> arr = {1,3,6};
    cout<<canMakeArithmeticProgression(arr);
    return 0;
}
