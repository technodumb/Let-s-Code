#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int inp, a, b;
        cin>>a>>b;
        cout<<(a^b)<<endl;
    }
    return 0;
}