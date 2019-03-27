#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k>0)
    {
        long long int n, a[10000005];
        //no of tunnels
        cin>>n;
        for(int i=0;i<n;i++)
        {
            //time taken to process at each tunnel
            cin>>a[i];
        }
        //enter no of cars, distance and speed
        long long int c,d,s;
        cin>>c>>d>>s;
        //time taken to cross each tunnel
        int max = a[0];
        for (int j=1;j<n;j++)
            if (a[j] > max)
                max = a[j];

        cout<<max*(c-1)<<".000000000"<<endl;


        k--;
    }
return 0;
}
