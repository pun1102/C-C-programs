#include<bits/stdc++.h>
using namespace std;
#define size 500
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int i,n;
        int a[size];
        cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //checking no of element if it it is even or odd.
        int odd=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
             odd++;
            }
        }
        int x=odd;
        if(x%2==0)
            cout<<1<<endl;
        else
            cout<<2<<endl;


    t--;
    }

return 0;
}
