#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n,count=0;   
    cin >> n;
     int array[n];
    for(int i =0;i<n;i++)
    cin >> array[i];
   

    for(int j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
                {
                     count += array[j]-array[j+1];
                     array[j+1]= array[j];
                    
                    
                }
        }
    cout << count;
}
