#include<iostream>
using namespace std;

int prime(int x);
int main()
{
    int n,i;
    cout<<"Enter a number:";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(prime(i)){
            if(prime(n-i))
            {
                cout<<"\nThe number entered is sum of following two prime numbers:"<<n<<"="<<i<<"+"<<n-i;
            }
        }
    }
    return 0;
}
 int prime(int x){
     int a;
     for(a=2;a<=x/2;a++){
        if(x%a==0){
            return 0;
        }
        else{
            return x;
        }
     }
     return 1;

 }

