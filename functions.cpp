#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter value for a and b"<<endl;
    cin>>a>>b;
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    return 0;
}

