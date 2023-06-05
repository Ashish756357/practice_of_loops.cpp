#include<iostream>
using namespace std;

int main(){
    int N;
    int sumeven=0;
    int sumodd=0;
    int total_int;
    cout<<"Enter the total number of integer: ";
    cin>>total_int;
    for(int i = 0;i<total_int;i++){
        cin>>N;
    if(N%2==0){
        sumeven+=N;
    }
    else{
        sumodd+=N;
    }
}
    cout<<sumeven<<"For even number"<<endl;
    cout<<sumodd<<"For odd number"<<endl;
    return 0;
}
