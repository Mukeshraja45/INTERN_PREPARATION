// 6) Find if a number is an armstrong number :


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int val;
    cout<<"Enter the number=";
    cin>>val;
    int val1=val,val2=val,val3=0;
    int count=0;
    while(val!=0){
        count++;
        val= val/10;
    }
    while(val1!=0){
        int n = val1%10;
        val3+=pow(n,count);
        val1/=10;
    }
    if(val3==val2) cout<<val2<<" is Armstrong number";
    else cout<<"Not a Armstrong number";
    return 0;
}