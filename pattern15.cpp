#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int space =n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=i){
            cout<<i;
            col++;
        }
        i++;
        cout<<endl;

    }

}