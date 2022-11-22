#include<iostream>

int main(){
    int leap[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int ord[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,mon;
    std::cout<<"Enter the year=";
    std::cin>>year;
    std::cout<<std::endl;
    std::cout<<"Enter the month=";
    std::cin>>mon;
    std::cout<<std::endl;
    int le;
    if(year%400==0) le=1;
    else if(year%100) le=0;
    else if(year%4==0) le=1;
    else le=0;
    if(le==1) std::cout<<leap[mon-1];
    else std::cout<<ord[mon-1];
    std::cout<<" days are present in "<<year<<"-"<<mon<<".";
}