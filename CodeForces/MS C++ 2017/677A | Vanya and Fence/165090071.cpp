#include <iostream>
using namespace std;
int main() {
    int n,h,height,j=0,k=0;
    cin>>n>>h;
    
    for(int i=1;i<=n;i++)
    {
        cin>>height;
        if(height>h)
        j+=2;
        else
        k++;
    }
    cout<<j+k;
    
 
    return 0;
}