#include<iostream>
using namespace std;
int main()
{
    int t,i,j,temp;
    cin>>t;
    while(t>0)
    {
        int n,k;
        int A[n];
        cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cin>>k;
        A[n+1]=k;
        for(i=0;i<n+1;i++)
        {
            cout<<A[i];
        }


        t--;


    }
    return 0;
}
