#include<bits/stdc++.h>
using namespace std;

bool sol(set<int> a, set<int> b){
    
    for(auto it:b){
        if(a.find(it)==a.end()){
            return false;
        }
    }
    return true;
}

int main(){
    
    set<int> a={10, 20, 23, 40, 50, 60, 89 };
    set<int> b={50,60,89};
    
    if(sol(a,b)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}