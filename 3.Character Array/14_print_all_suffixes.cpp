#include<iostream>
#include<cstring>
using namespace std;

void printallprefixes(char str[]){
    int l;
    l=strlen(str);
    for(int e=(l-1);e>=0;e--){
        for(int s=(l-1);s>=e;s--){
            cout<<str[s];
        }
        cout<<endl;
    }

}
int main(){
    char str[100];
    cout<<"Enter the string : ";
    cin>>str;
    cout<<endl;
    printallprefixes(str);
    
    return 0;
}

