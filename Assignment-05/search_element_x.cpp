#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define f0(i,n) for(int i=0;i<n;i++)
vector<int> v;
int n;
int x;
bool solve(int left,int right){
    if(left==right){
        if(v[left]==x){
            return true;
        }
        else{
            return false;
        }
    }
    int mid=left+(right-left)/2;
    return (solve(left,mid) || solve(mid+1,right));
}
int main(){
    cin>>n>>x;
    f0(i,n){
        int y;
        cin>>y;
        v.pb(y);
    }
    bool is_present=solve(0,n-1);
    if(is_present){
        cout<<x<<" is present"<<endl;
    }
    else{
        cout<<x<<" is not present"<<endl;
    }
}