#include<bits/stdc++.h>
using namespace std;

void subarr(long long int a[],long long int v)
{
    long long int b[v],s=0,j=0;
    for(long long int i=0;i<v;i++)
    {
        if(a[i]>=0)
            {s+=a[i];
            }
        else
            {b[j]=s;
            s=0;j++;}
    }
    if(a[v-1]>=0)
        {b[j]=s;j++;}
        sort(b,b+j);
    cout<<b[j-1]<<endl;

}



int main()
{
    long long int maxsum;
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int n,i,k,j,m;
        cin>>n>>k;
        long long int a[n];long long int s=0,c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
                c++;
                s+=a[i];
            }
        }
        long long int b[n*k];
        m=0;
        for(i=0;i<k;i++)
        {
            for(j=0;j<n;j++)
            {
                b[m]=a[j];
                m++;

            }

        }
        if(c==n)
            {cout<<s*k<<endl;continue;}
        else{
        subarr(b,n*k);}
    t--;
    }
    return 0;
}
