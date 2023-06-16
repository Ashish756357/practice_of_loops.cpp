#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    int sum;
    cout<<" Enter the value of n: "<<endl;
    cin>>n;
    while(i<=n){
        sum+= i;
        i++;
    }
    cout<<sum;
    return 0;
}
