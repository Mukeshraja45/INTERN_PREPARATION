// 15) Check if the given elements are in the given range

#include<iostream>
using namespace std;

int main(){
    int len=0,a,b;
    cout<<"Enter the length of the array=";
    cin>>len;
    int arr[100000];
    for(size_t i{0};i<len;i++){
        cout<<"Enter the element-"<<i+1<<" = ";
        int val=0;
        cin>>val;
        arr[val]++;
    }
    cout<<"Enter the initial range = ";
    cin>>a;
    cout<<"Enter the final range = ";
    cin>>b;
    int count = 0;
    for(int i=a;i<=b;i++){
        if(arr[i]==0){
            if(count==0){
                cout<<"Array does not has ";
                count++;
            }
            cout<<i;
        }
    }
    if(count==0) cout<<"Array has all te elements in the range.";
    return 0;
}