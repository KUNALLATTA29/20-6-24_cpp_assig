#include<bits/stdc++.h>
using namespace std;


int main(){
    
    vector<int> a={1,2,3,4,5,6,7};
    vector<int> b={5,6,7,8,9,0};
    vector<int> c={4,3,66,13};
    
    for(auto it=a.begin(); it!=a.end();){
        auto k=find(b.begin(),b.end(),*it);
        auto x=find(c.begin(),c.end(),*it);
        if(k!=b.end()){
            b.erase(k);
            it=a.erase(it);
        }else if(x!=c.end()){
            c.erase(x);
            it=a.erase(it);
        }
        else{
            it++;
        }
    }
    
    
    for(auto it: a){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:b){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:c){
        cout<<it<<" ";
    }
    
    return 0;
}