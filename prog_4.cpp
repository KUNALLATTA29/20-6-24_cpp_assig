#include<bits/stdc++.h>
using namespace std;


int main(){
    
    vector<int> a={1,2,3,4,5,6,7,2,6};
    vector<int> b={5,6,7,8,9,0,6,5,0};
    vector<int> c={4,3,66,13,2,3,4};
    vector<int> d={11,2,3,22,11,5,3,2};
    
    set<int> set1(a.begin(),a.end());
    set<int> set2(b.begin(),b.end());
    set<int> set3(c.begin(),c.end());
    set<int> set4(d.begin(),d.end());
    
    
    for(auto it: set1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:set2){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:set3){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:set4){
        cout<<it<<" ";
    }
    
    return 0;
}