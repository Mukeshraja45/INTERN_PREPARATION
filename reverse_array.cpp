// 11) Reverse an array

#include<iostream>
using namespace std;

int main(){
    int len=0;
    cout<<"Enter the length of the array=";
    cin>>len;
    int arr[len];
    for(size_t i{0};i<len;i++){
        cout<<"Enter the element-"<<i+1<<" = ";
        cin>>arr[i];
    }
    int n = len-1;
    for(size_t i{0};i<(len/2);i++){
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        n--;
    }
    cout<<"After reversing:-"<<endl;
    for(auto i:arr) cout<<i<<endl;
    return 0;
}