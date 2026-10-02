#include <iostream>
using namespace std;
int main(void){
  long int n;
    do{
cin>>n;
    }while(n<1 || n>1000000);
     cout << n ;
    while(n!=1){
    if(n%2==0)
    {
    n/=2;
    }
    else
    {
        n=n*3+1;
    }
    cout << " " << n;    
    }
}
