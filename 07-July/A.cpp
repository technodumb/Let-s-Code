#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b, div;
        cin>>a>>b;
        div = abs(a-b);
        cout<<div<<" "<<(a==b?0:(a%div<(div-a%div))?a%div:div-a%div)<<"\n";
    }
    return 0;
}