#include<iostream>
#define ll long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, count=0;
        cin>>n;
        string a,b;
        cin>>b>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                if(b[i]=='0')
                    count++;
                else if(i>0 && b[i-1]=='1'){
                    count++;
                    b[i-1]='2';
                }
                else if(i<(n-1) && b[i+1]=='1'){
                    count++;
                    b[i+1]='2';
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}