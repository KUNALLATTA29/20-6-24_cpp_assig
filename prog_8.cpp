#include<bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> a={1,2,3,4,5,6,7};
    set<int> b={5,6,7,8,9,10,11};
    
    char z;
    cin>>z;
    
    set<int> arr;
    
    if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u'){
        for(auto it:a){
            if(b.find(it)!=b.end()){
                arr.insert(it);
            }
        }
    }else if(z>='a' && z<='z' &&(z!='a'||z!='e'||z!='i'||z!='o'||z!='u') ){
        for(auto it:a){
            arr.insert(it);
        }
        for(auto it:b){
            arr.insert(it);
        }
    }else if(z < 'a' || z > 'z'){
        
       for(auto it:a){
            arr.insert(it);
        }
        for(auto it:b){
            arr.insert(it);
        }
        
        for(auto it:a){
            if(b.find(it)!=b.end()){
                arr.erase(it);
            }
        }
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}