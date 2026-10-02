#include<iostream>
using namespace std;

int main()
{
    int n,missing;
    do{
        cin >>n;
    }while(n<2 ||n>200000);

int array[n-1];
    for(int i =0;i<n-1;i++)
        {
            cin >>array[i];
        }
    for(int i=0 ,j=1;j<=n,i<n-1;j++,i++)
    {
        if(j!=array[i])
            missing=j;
    }
    cout <<missing;
   
}