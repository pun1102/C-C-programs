#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,tem=0,var=0;
        int i;
        cin>>n;
        long int A[n];
        for(i=0;i<n;i++)
        {
            A[i]=i+1;
        }
        if(n%2==0)
        {
         for(i=0;i<n;i=i+2)
         {
             tem=A[i];
             A[i]=A[i+1];
             A[i+1]=tem;
         }
         for(i=0;i<n;i++)
         {
             cout<<A[i]<<" ";
         }
         cout<<endl;
        }
        else
        {
            for(i=0;i<n-1;i=i+2)
            {
                tem=A[i];
                A[i]=A[i+1];
                A[i+1]=tem;
            }
            var=A[n-2];
            A[n-2]=A[n-1];
            A[n-1]=var;
            for(i=0;i<n;i++)
            {
                cout<<A[i]<<" ";
            }
            cout<<endl;

        }
        t--;
    }
return 0;
}

