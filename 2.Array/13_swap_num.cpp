#include<iostream>
using namespace std;
int main(){
   
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;

    cout<<"Before swaping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"After swaping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


    return 0;
}