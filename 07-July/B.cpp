#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int cars, sum=0;
        for(int i=0; i<n;i++){
            cin>>cars;
            sum+=cars;
        }
        cout<<sum%n * (n- sum%n)<<"\n";
    }
    return 0;
}