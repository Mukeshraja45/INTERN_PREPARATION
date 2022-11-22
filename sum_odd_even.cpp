// 17) Given an array, find the sum of elements at odd index and elements at even index

#include<iostream>
using namespace std;

int main(){
    int len=0,odd=0,even=0;
    cout<<"Enter the length of the array = ";
    cin>>len;
    int arr[len];
    for(size_t i{0};i<len;i++){
        cout<<"Enter the element-"<<i+1<<" = ";
        cin>>arr[i];
    }
    int ind=0;
    for(auto i:arr){
        if(ind%2==0) odd+=i;
        else even+=i;
        ind++;
    }
    cout<<"Sum of elements at odd is "<<odd<<" and even is "<<even;
    return 0;
}