#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    switch(age){
        case 18:
        cout<<"You are 18"<<endl;
        break;
        case 14:
        cout<<"You are 14"<<endl;
        break;
        default:
        cout<<"You are not 18"<<endl;
    }
    return 0;
}