#include<iostream>
using namespace std;

void printmy2darray(int a[][5],int m,int n){
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int a[5][5]={ {1,2},{3,4} };
    int b[5][5]={{0}};
    printmy2darray(b,5,5);

    return 0;
}