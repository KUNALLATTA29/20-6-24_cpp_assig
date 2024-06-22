#include<bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> a={1,2,3,4,5,6,7,2,6};
    vector<int> arr={1,2,4,33,66,12};
    
    for(auto it:arr){
        if(a.find(it)!=a.end()){
            cout<<it<<" is present in set"<<endl;
        }else{
            cout<<it<<" is not present in set"<<endl;
        }
    }
    
    return 0;
}