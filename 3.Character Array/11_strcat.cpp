#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str1[100];
    char str2[100];

    cout<<"Enter the first string : ";
    cin>>str1;
    cout<<endl;
    cout<<"Enter the second string : ";
    cin>>str2;
    cout<<endl;

    cout<<"Before concatenation the value is : "<<endl;
    cout<<"value of str1 "<<str1<<endl;
    cout<<"value of str2 "<<str2<<endl;

    strcat(str1,str2);
    
    cout<<"After concatenation the value is : "<<endl;
    cout<<"value of str1 "<<str1<<endl;
    cout<<"value of str2 "<<str2<<endl;

    return 0;
    
}