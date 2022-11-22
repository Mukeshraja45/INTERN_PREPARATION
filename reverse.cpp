// 3) Reverse of a number

#include<iostream>

int main(){
    int a;
    std::cout<<"Enter the number=";
    std::cin>>a;
    while(a!=0){
        int last = a%10;
        std::cout<<last;
        a/=10;
    }
    return 0;
}