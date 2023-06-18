#include<iostream>
using namespace std;

int main(){
    
    int row;
    int i = 1;
    cin>>row;
    while(i<=row){
        int j = 1;
        while(j<=row){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
