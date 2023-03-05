#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4,5};
    for(int i=0;i<nums.size();i+=2){
        if(i+1<nums.size())
        swap(nums[i],nums[i+1]);
    }
    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";

}