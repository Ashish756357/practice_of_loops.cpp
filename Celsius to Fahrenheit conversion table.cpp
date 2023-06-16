#include<iostream>
using namespace std;

int main(){
    
    double lower_limit;
    double upper_limit;
    double gap;
    double Fahrenheit;
    
    cout<<"Enter the value of lower limit: ";
    cin>>lower_limit;
    
    cout<<"Enter the value of upper limit: ";
    cin>>upper_limit;
    
    cout<<"Gap b/w each c reading: ";
    cin>>gap;
    
    while(lower_limit<=upper_limit){
          Fahrenheit = (lower_limit * 9/5) + 32;
          lower_limit += gap;
          cout<< Fahrenheit <<endl;
    }
    return 0;
}
