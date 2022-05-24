#include <bits/stdc++.h>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
    vector<int> diff_pos;
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i])
            diff_pos.push_back(i);
        if(diff_pos.size() > 2)
            return false;
    }
    
    if(diff_pos.empty())
        return true;
    if(diff_pos.size() == 2) 
        swap(s1[diff_pos[0]], s1[diff_pos[1]]);
    
    return s1 == s2; 
}

int main(){
    string s1 = "bank";
    string s2 = "kanb";
    cout<<areAlmostEqual(s1,s2);
    return 0;
}