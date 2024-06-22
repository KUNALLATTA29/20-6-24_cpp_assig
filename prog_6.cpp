#include<bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> a={1,2,3,4,5};
    set<int> b={4,5,6,7,8};
    set<int> c={7,8,9,10,11};
    
    set<int> r1;
    set<int> r2;
    
    for(auto it:a){
        if(b.find(it)==b.end()){
            r1.insert(it);
        }
    }
    for(auto it:b){
        if(a.find(it)==a.end()){
            r1.insert(it);
        }
    }
    
    for(auto it:r1){
        if(c.find(it)==c.end()){
            r2.insert(it);
        }
    }
    for(auto it:c){
        if(r1.find(it)==r1.end()){
            r2.insert(it);
        }
    }
    
    
    for(auto it:r2){
        cout<<it<<" ";
    }
    
    
    
    return 0;
}