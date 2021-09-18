#include<iostream>
using namespace std;
int length(char input[]){
    int count= 0;
    for(int i=0; input[i] != '\0'; i++){
        count++;
    }
    return count;
}


char mystrcpy(char str1[],char str2[]){

    int n;
    n=length(str2);

    for(int i=0; i<n; i++){
        str1[i]=str2[i];
    }    
    
}

int main(){

   char str1[100];
   char str2[100];
   cin>>str1>>str2;

   cout<<"before copying"<<endl;
   cout<<"valve of str1 "<<str1<<endl;
   cout<<"valve of str2 "<<str2<<endl;

   mystrcpy(str1,str2);

   cout<<"after copying"<<endl;
   cout<<"valve of str1 "<<str1<<endl;
   cout<<"valve of str2 "<<str2<<endl;


   return 0;
}