//12) Given an array, find the second largest number

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
    for(unsigned int i=0;i<len-1;i++){
        for(unsigned int j=i;j<len;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"The second largest number is "<<arr[1];
    return 0;
}