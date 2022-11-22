// 13) Single number

#include<iostream>
using namespace std;

int main(){
    int len=0;
    cout<<"Enter the length of the array=";
    cin>>len;
    long long int arr[100000]={};
    for(unsigned int i=0;i<len;i++){
        long long int val=0;
        cout<<"Enter the element-"<<i+1<<" = ";
        cin>>val;
        if(arr[val]==0){
            arr[val]++;
        }
        else{
            arr[val]--;
        }
    }
    for(unsigned int i=0;i<100000;i++){
        if(arr[i]==1){
            cout<<i<<" is a single number."<<endl;
            break;
        }
    }
    return 0;
}