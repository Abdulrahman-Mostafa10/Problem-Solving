#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int countA=0,countD=0,n;
    char S;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>S;
        if(S=='A')
        countA++;
        else if(S=='D')
        countD++;
        else
        {
            i--;
            continue;
        }
    }
    if(countA>countD)
    cout<<"Anton";
    else if (countA<countD)
    cout<<"Danik";
    else
    cout<<"Friendship";
        
        
        
        
        
  
 
    return 0;
}