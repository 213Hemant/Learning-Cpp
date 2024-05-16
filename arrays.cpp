#include<iostream>
using namespace std;
int main(){
    int array[2][2];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>array[i][j];
        }
    }
    cout<<"The elements entered are: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        cout<<array[i][j]<<" ";
        cout<<endl;
        }
    }
    return 0;
}