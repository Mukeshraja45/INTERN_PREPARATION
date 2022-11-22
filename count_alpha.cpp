// 9) Given a string, count the number of alphabets in it

#include<iostream>
using namespace std;

int main(){
    string val;
    cout<<"Enter the string=";
    getline(cin,val);
    int count=0;
    for(auto ans:val){
        int a = ans;
        if((a>=97 && a<=122)||(a>64 && a<=90)){
            count++;
        }
    }
    cout<<"The number of alphabets in a "<<val<<" is "<<count<<endl;
    return 0;
}