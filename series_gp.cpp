// 4) Series GP

#include<iostream>
#include<cmath>

int main(){
    int n,a,r;
    std::cout<<"Enter value for n=";
    std::cin>>n;
    std::cout<<"Enter value for a=";
    std::cin>>a;
    std::cout<<"Enter value for r=";
    std::cin>>r;
    int s=0;
    for(int i=0;i<n;i++){
        s = a*pow(r,i);
        std::cout<<s<<std::endl;
    }
    
    return 0;
}