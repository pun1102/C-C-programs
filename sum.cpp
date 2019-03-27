#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,sum=0;
    for(i=0;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            sum = i*i*i + j*j*j;
            cout<<sum<<" ";
        }
    }
    return 0;

}
