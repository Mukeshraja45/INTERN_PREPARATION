// 16) Total fine


#include<iostream>
using namespace std;

int main(){
    int len,date;
    cout<<"Enter the no of cars = ";
    cin>>len;
    cout<<"Enter the date = ";
    cin>>date;
    int car[len],fine[len];
    for(size_t i{0};i<len;i++){
        cout<<"Enter the car no = ";
        cin>>car[i];
        cout<<"Enter the fine for that car = ";
        cin>>fine[i];
    }

    int sum=0;
    if(date%2==0){
        for(size_t i{0};i<len;i++){
            if(car[i]%2!=0){
                sum+=fine[i];
            }
        }
    }
    else{
       for(size_t i{0};i<len;i++){
            if(car[i]%2==0){
                sum+=fine[i];
            }
        } 
    }
    cout<<"The sum of the fines is "<<sum;
    return 0;
}