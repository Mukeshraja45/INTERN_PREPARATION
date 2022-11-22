// 5) Reverse a string and check if it’s a palindrome

#include<iostream>
#include<algorithm>


int main(){
    std::string val,val1;
    std::cout<<"Enter the sentence=";
    std::getline(std::cin,val);
    val1=val;
    std::reverse(val1.begin(),val1.end());
    if(val==val1) std::cout<<val<<" is Palindrome";
    else std::cout<<val<<" is not a palindrome";
    return 0;
}