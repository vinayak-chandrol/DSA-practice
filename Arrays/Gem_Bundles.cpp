#include <bits/stdc++ .h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int r,b,g;
        cin>>r>>b>>g;

        int bundles = min({r,b,g});
        
        r-=bundles;
        b-=bundles;
        g-=bundles;

        int total=bundles*10+(r+b+g)*3;
        cout<<total<<endl;
    }
}