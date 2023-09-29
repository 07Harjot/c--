#include<iostream>
using namespace std;
int main(){
    int count=0;
int num=0;
string frag;
cin>>num;
string s=to_string(num);
for(int i=0;i<s.length();i++){
    for(int j=i;j<s.length();j++){
         frag=s.substr(i,j-i+1);
        if(stoi(frag)%11==0){
            count++;
        }
    }
}
cout<<count;
return 0;
}