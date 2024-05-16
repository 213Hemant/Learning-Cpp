#include<iostream>
using namespace std;
int main(){
    float a;
    float * ptra;
    a = 88.99;
    ptra = &a;
    cout<<a<<endl<<ptra<<endl<<* ptra<<endl<<&a;
    // Output:
    // 88.99
    // 0x61ff08
    // 88.99
    // 0x61ff08
    return 90;
}