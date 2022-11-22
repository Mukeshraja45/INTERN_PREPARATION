// 14) Maximum money

#include<iostream>
using namespace std;

int main(){
    int n,k,rob=0;
    cout<<"Enter the no.of.houses = ";
    cin>>n;
    cout<<"Enter the amount kept inside each house = ";
    cin>>k;
    rob = (n%2==0) ? (n/2)*k : ((n/2)+1)*k; 
    cout<<"The robber can rob "<<rob<<" dollars ";
    return 0;
}