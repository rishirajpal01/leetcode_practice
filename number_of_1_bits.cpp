#include <bits/stdc++.h>

int hammingWeight(uint32_t n) {
        int count = 0;
        while (n){
            n &= (n-1);
            count++;
        }
        return count;
}

int main(){
    uint32_t n = 00000000000000000000000000001011;
    std::cout<<hammingWeight(n);
    return 0;
}