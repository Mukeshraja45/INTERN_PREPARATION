// 7) Search an element in an array

#include<iostream>
using namespace std;

int main(){
    int a[100],len=0,find,yes=0;
    cout<<"Enter the length of an array=";
    cin>>len;
    for(size_t i{0};i<len;i++){
        cout<<"Enter the a["<<i+1<<"] = ";
        cin>>a[i];
    }
    cout<<"Enter the number to serach in an array=";
    cin>>find;
    for(auto val:a){
        if(val==find){
            cout<<find<<" is present in an array";
            yes=1;
            break;
        }
    }
    if(yes==0){
        cout<<find<<" is not present in an array";
    }
    return 0;
}