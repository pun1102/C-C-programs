#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int i,j,n;
        cin>>n;
        long long int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }

        }
        for(i=0;i<n;i++)
        {
            sort(a[i],a[i]+n,greater<long long int>());

        }
        long long int b,key,sum=0;
        b=a[n-1][0];
        sum+=b;
        for(i=n-2;i>=0;i--)
        {
            key=b;
            for(j=0;j<n;j++)
            {
                if(a[i][j]<b)
                {
                    b=a[i][j];
                    sum+=b;
                    break;
                }
            }
            if(key==b){
                sum=-1;
                break;
            }
        }
            cout<<sum<<endl;
        t--;
    }
    return 0;
}
