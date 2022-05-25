#include <bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    int x = coordinates[1][0]-coordinates[0][0],
        y = coordinates[1][1]-coordinates[0][1];

    for(int i = 2; i < coordinates.size(); i++){
        if((coordinates[i][0]-coordinates[0][0]) * y !=  (coordinates[i][1]-coordinates[0][1]) * x)
            return false;
        }
    return true;
}

int main(){
    vector<vector<int>> arr = {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    cout<<checkStraightLine(arr);
    return 0;
}