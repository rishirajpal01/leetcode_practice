#include <bits/stdc++.h>
using namespace std;

int digitSquareSum(int n) {
    int sum = 0, tmp;
        while (n) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }
    
bool isHappy(int n) {
    int slow, fast;
    slow = fast = n;
    do {
        slow = digitSquareSum(slow);
        fast = digitSquareSum(fast);
        fast = digitSquareSum(fast);
        if(fast == 1) 
            return 1;
    } 
    while(slow != fast);
    return 0;
}

int main(){
    int n = 19;
    cout<<isHappy(n);
    return 0;
}