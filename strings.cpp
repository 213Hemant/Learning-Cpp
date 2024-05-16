#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Hemant";
    cout<<"The string is : "<<name<<endl;
    cout<<"The length of the string is "<<name.length()<<endl;
    cout<<"The character at 2nd index is "<<name.at(2)<<endl;
    //name[2] = 'n'; // this will throw an error
    cout<<"The substring is "<<name.substr(0,3)<<endl;
    return 0;
}