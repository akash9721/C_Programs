#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    int res=1;
    while(n>0){
        if(n%2!=0)
            res=res*x;
    x=x*x;
    n=n/2;
    }
    return res;
}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<power(x,n);
}