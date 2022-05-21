#include <iostream>

int countOdds(int low, int high){
    return ((high+1) / 2) - (low / 2);
}

int main(){
    int f,l;
    std::cout<<"Enter first number: ";
    std::cin>>f;
    std::cout<<"Enter last number: ";
    std::cin>>l;
    std::cout<<countOdds(f,l);

    return 0;
}