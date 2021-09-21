#include<iostream>
using namespace std;

int length(char input[]){
    int count= 0;
    for(int i=0; input[i] != '\0'; i++){
        count++;
    }
    return count;
}

void mystrcat(char str1[] , char str2[]){

    int n,m;
    n=length(str1);
    m=length(str2);

    for(int i=0;i<=(n+m);i++){
        str1[n+i]=str2[i];
    }

}

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

    mystrcat(str1,str2);
    
    cout<<"After concatenation the value is : "<<endl;
    cout<<"value of str1 "<<str1<<endl;
    cout<<"value of str2 "<<str2<<endl;

    return 0;
    
}