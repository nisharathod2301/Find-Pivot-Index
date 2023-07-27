// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    vector <int> nums = {1,7,3,6,5,6};
    int pivot;
    int len = nums.size();
    int ptr =1;
    int ls = 0;
    int rs = 0;
    // cout<<accumulate(nums.begin(),nums.begin()+1, 0);
    // cout<<accumulate(nums.begin()+2,nums.end(),0);
    // cout<<ls;
    for(int i = 0; i<len;i++){
        // if(i==0){
        //     ls = 0;
            
        // }
        ls = accumulate(nums.begin(),nums.begin()+i, 0);
        cout<<i<<"\t";
        cout<<ls<<"\t";
        rs = accumulate(nums.begin()+i+1,nums.end(),0);
        cout<<rs<<"\n";
        // if(ls==rs){
        //     ptr = i;
        //     break;
        // }
    }
    cout<<ptr;
    // return 0;
}
