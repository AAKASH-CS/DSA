#include<iostream>
using namespace std;

void printallprefixes(char str[]){
    for(int e=0;str[e]!='\0';e++){
        for(int s=0;s<=e;s++){
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

