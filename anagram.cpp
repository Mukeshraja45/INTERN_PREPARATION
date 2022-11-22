// 10) Check if two strings are anagrams

#include<iostream>
using namespace std;

int main(){
    string val;
    cout<<"Enter the sentence=";
    getline(cin,val);

    string val1;
    cout<<"Enter the sentence=";
    // cin.get(val1,100);
    getline(cin,val1);

    string ans=val,ans1=val1;

    int count=0,ind=0;

    for(auto i:val){
        if(i!=' '){
            int ind1=0;
            for(auto j:val1){
                    i=(char) tolower(i);
                    j=(char) tolower(j);
                if(i==j){
                    count++;
                    val1[ind1]='1';
                    val[ind]='2';
                    break;
                } 
                ind1++;
            }
            ind++;
        }
    }
    int len=0,len1=0;
    for(auto i:ans){
        if(i!=' ') len++;
    }

    for(auto i:ans1){
        if(i!=' ') len1++;
    }

    if(len==count && len==len1) cout<<ans<<" and "<<ans1<<" are Anagrams";
    else cout<<ans<<" and "<<ans1<<" aren't Anagrams";
    return 0;
}