#include<iostream>
using namespace std;

int main(){
    
    double lower_limit;
    double upper_limit;
    double gap;
    double Fahrenheit;
    double Celsius;
    
    cout<<"Enter the value of lower limit: ";
    cin>>lower_limit;
    
    cout<<"Enter the value of upper limit: ";
    cin>>upper_limit;
    
    cout<<"Gap b/w each c reading: ";
    cin>>gap;
    Celsius = lower_limit;
    while(Celsius<=upper_limit){
          Fahrenheit = (lower_limit * 9/5) + 32;
          Celsius += gap;
          cout<< Celsius<<"     "<<Fahrenheit <<endl;
    }
    return 0;
}
