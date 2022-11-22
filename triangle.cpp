//  1) Get the three sides of a triangle and check if it is equilateral, isosceles or scalene.


#include<iostream>

int main(){
    int a,b,c;
    std::cout<<"Enter the three sides like val val1 val2 = "; 
    std::cin>>a>>b>>c;
    if(a==b && a==c) std::cout<<"The triangle is equilateral."<<std::endl;
    else if(a==b || a==c || b==c) std::cout<<"The triangle is Isosceles."<<std::endl;
    else std::cout<<"The triangle is Scalene triangle."<<std::endl;
    return 0;
}