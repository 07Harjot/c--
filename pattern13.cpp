#include<iostream>
using namespace std;
int main(){
    int n=6;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=i-1){
            cout<<" ";
            space++;
        }
        int col=1;
        while(col<=n-i+1){
            cout<<"*";
            col++;
        }
        cout<<endl;
        i++;     
    }
}