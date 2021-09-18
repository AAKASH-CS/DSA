#include<iostream>
using namespace std;
int main(){

    char name[100];

    cout<<"Enter your name = ";
    cin.getline(name,10,'w');

    cout<<endl;

    cout<<"Hi "<<name<<".";

    return 0;

}