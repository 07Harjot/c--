#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int space=0;
        while(space<=i-1){
            cout<<" ";
            space++;
        }
        int col=1;
        int j=i;
        while(col<=n-i+1){
            cout<<j;
            j++;
            col++;
        }
        i++;
        cout<<endl;
    }
}