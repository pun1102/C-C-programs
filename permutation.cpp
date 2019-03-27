#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        int count[26]={0},x;
        k=s.length();
        char ch;
        int c=0;
        while(s[c]!='\0')
            {
                if(s[c]>='a'&&s[c]<='z')
                {
                    x=s[c]-'a';
                    count[x]++;
                }
                c++;
            }
        int v=0,flag=0;
        for(c=0;c<26;c++)
        {
            if(count[c]%2!=0)
            {
                v++;
                if(v==1)
                    flag=c;
            }
        }
        if(v>1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int ind;
            for(int i=0;i<k;i++)
            {
                if(s[i]-'a'==flag)
                    ind=i;
            }
            cout<<ind<<endl;
            int j,w;
           // int flag=1;
                       int a[k];

           if(v==1)
           {
               a[k/2]=ind;
           }
            int y=0,m=0;

            for(j=0;j<k-1;j++)
            {
                for(w=j+1;w<k;w++)
                {
                    if(s[j]==s[w]&&j!=ind&&w!=ind)
                    {
                        a[m]=j+1;
                        a[k-m-1]=w+1;
                        m++;
                    }

                }
            }
            int q;
            for(q=0;q<k;q++)
            {
                cout<<a[q]<<" ";
            }
            cout<<endl;
        }
        }
        t--;
    }

