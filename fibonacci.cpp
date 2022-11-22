// 8) Print n fibonacci terms using iteration and recursion.

#include<iostream>
using namespace std;

int fibo(int val){
    if(val==0) return 0;
    else if(val==1) return 1;
    else{
        return fibo(val-1)+fibo(val-2);
    }
}

int main(){
    int n=0,a0=0,a1=1;
    cout<<"Enter the number of terms=";
    cin>>n;
    cout<<endl<<"Using Recursion:-"<<endl;
    for(size_t i{0};i<=n;i++){
        cout<<"Fibonacci["<<i<<"] = "<<fibo(i)<<endl;
    }
    cout<<endl<<"Using iteration:-"<<endl;
    for(size_t i{0};i<=n;i++){
        cout<<"Fibonacci["<<n<<"] = "<<a0<<endl;
        int temp = a0;
        a0 = a1;
        a1 = temp+a0;
    }
    return 0;
}

