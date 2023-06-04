// factorial of natural number
#include<iostream>
using namespace std;

int main(){
    int n;
    long long int fact = 1;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}
