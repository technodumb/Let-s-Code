#include<iostream>
#define ll long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n;
        b=n-1;
        a=b/2;
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}