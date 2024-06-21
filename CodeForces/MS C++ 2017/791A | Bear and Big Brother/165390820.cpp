// Abdo_Mostafa********
#include <iostream>
using namespace std;
int main() {
    int a,b,i=0;
    do{
    cin>>a>>b;}
    while(a<1 || a>b || b>10);
    while(a<=b)
    {
        a*=3; 
        b*=2;
        i++;
    }
   cout<<i;
 
    return 0;
}
//Bedo_on_the_way**************