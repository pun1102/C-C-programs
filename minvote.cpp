#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,i,j,k;
        cin>>n;
        long long int s[n],flag[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];flag[i]=0;
        }


        for(i=0;i<n;i++)
        {
            long long int sumr=0;
            for(j=i+1;j<n;j++){
            if(s[i]>=sumr)
                {flag[j]++;}
            else
                break;
            sumr+=s[j];
            }
        }
        for(i=n-1;i>=0;i--)
        {
            long long int suml=0;
            for(j=i-1;j>=0;j--){
           if(s[i]>=suml)
                {flag[j]++;}
            else
                break;
            suml+=s[j];}
        }
        for(i=0;i<n;i++)
            cout<<flag[i]<<" ";
        cout<<endl;

    }
}
