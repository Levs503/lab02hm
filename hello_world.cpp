#include<iostream>
#include<string>

void main(){
std::cout<<"enter your name"<<std::endl;
string name;
std::cout<<std::endl;
getline(std::cin, name);
std::cout<<"Hello world from "<<name;
}
