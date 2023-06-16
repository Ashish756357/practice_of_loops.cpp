#include<iostream>
using namespace std;

int main(){
    int n;
    int sum;
    int i = 1;
    cout<<" Enter the value of n: "<<endl;
    cin>>n;
    while(i<=n){
        if(i%2==0){
        sum+= i;
        }
        i++;
    }
    cout<<sum;
    return 0;
}
