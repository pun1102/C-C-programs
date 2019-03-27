#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long int n;
        cin>>n;
        long long int x[n], y[n];
        long long int i;
        for(i=0;i<=(n-1);i++)
        {
            cin>>x[i]>>y[i];

        }
            double x1=0.0; double y1=0.0;
            for(int j=0;j<=(n-1);j++)
            {
                x1=x1+x[j];
                y1=y1+y[j];
            }
            x1=x1/n;
            y1=y1/n;
            long long int k,x2=0,y2=0;
            for(k=0;k<(n/10);k++)
            {
                x2=(int)(x1+x[k])/2;
                y2=(int)(y1+y[k])/2;
                cout<<x2<<" "<<y2<<endl;

            }


    t--;
    }
return 0;
}
