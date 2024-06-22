#include<bits/stdc++.h>
using namespace std;

bool sol(set<int> arr, int max){
    return arr.find(max)!=arr.end();
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    set<int> arr={1,2,3,4,5,6};
    
    int max=a;
    
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    
    if(sol(arr,max)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}