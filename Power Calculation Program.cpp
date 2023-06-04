#include<iostream>
using namespace std;


int main(){
    int power;
    int base;
    long long int result=1;
    cout<<"Enter the value of base: ";
    cin>>base;
    cout<<"Enter the value of power: ";
    cin>>power;
    
    for(int i=1;i<=power;i++){
        result*=base;
    }
    cout<<result<<endl;
    return 0;
}
