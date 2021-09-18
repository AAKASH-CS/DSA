#include<iostream>
#include<cstring>
using namespace std;

int main(){

   char str1[100];
   char str2[100];
   cin>>str1>>str2;

   cout<<"before copying"<<endl;
   cout<<"valve of str1 "<<str1<<endl;
   cout<<"valve of str2 "<<str2<<endl;

   strcpy(str1,str2);

   cout<<"after copying"<<endl;
   cout<<"valve of str1 "<<str1<<endl;
   cout<<"valve of str2 "<<str2<<endl;


   return 0;
}