#include <bits/stdc++.h>
using namespace std;
double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum = 0;
        for (int i=1; i<salary.size()-1; i++){
            sum += salary[i];
        }
        return double(sum/double(salary.size()-2));
        
    }

int main(){
    vector<int> arr = {48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000};
    cout<<setprecision(5)<<fixed<<double(average(arr));
    return 0;
}