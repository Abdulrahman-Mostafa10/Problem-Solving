//__Bedo__on_the_way**********
#include <iostream>
using namespace std;
int main() {
    int p,v,t,i=0,n;
    cin>>n;
    for(int j=1;j<=n;++j){
        cin>>p; cout<<" ";
        cin>>v; cout<<" ";
        cin>>t; cout<<" ";
        if( (p==1 && v==1) || (v== 1 && t==1) || (p==1 && t==1))
        ++i;
        
    }
    cout<<i;
 
    return 0;
}