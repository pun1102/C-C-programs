#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        int k=s.length();
        int c,h,e,f,a=0;
        for(int i=0;i<=k-4;i++)
        {
            c=0;h=0;e=0;f=0;
            for(int j=0;j<4;j++)
            {
                if(s[i+j]=='c')
                    c++;
                if(s[i+j]=='h')
                    h++;
                if(s[i+j]=='e')
                    e++;
                if(s[i+j]=='f')
                    f++;
            }
            if(c==h&&h==e&&e==f&&f==1)
                a++;
        }
            if(a==0)
                cout<<"normal"<<endl;
            else
                cout<<"lovely "<<a<<endl;




        t--;
    }
}
