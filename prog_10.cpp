#include<bits/stdc++.h>
using namespace std;
int sol1(vector<int> vec, int a){
    map<int,int> map;
    for(auto it:vec){
        map[it]++;
    }
    return map[a];
}
bool sol2(set<int> set, int b){
    return set.find(b)!=set.end();
}

string sol3(int sum){
    if(sum%2==0){
        return "even";
    }else{
        return "odd";
    }
}

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int sum = a+b+c+d;
    
    if(sum<0){
        vector<int> vec = {1,2,3,4,5,6,7,8,1};
        cout<<sol1(vec, a);
    }else if(sum>0){
        set<int> set={1,2,3,4,5,6,7};
        if(sol2(set,b)){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }else{
        cout<<sol3(sum);
    }
    
    return 0;
}