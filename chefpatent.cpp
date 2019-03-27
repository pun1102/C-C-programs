#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    string s;
    int w,m,x,k;
    cin>>w>>m>>x>>k;
    cin>>s;
    int a=0,c=0;
    for(int i=0;i<k;i++)
        {
            if(s[i]=='O')
                a++;
            if(s[i]=='E')
                c++;
            }
            for(int j=1;j<=m;j++)
                {
                    if(j%2==0&&c>0)
                    {
                        if(c<=x)
                        {
                            w=w-c;
                            c=0;
                        }
                        else
                            {
                                w=w-x;
                                c=c-x;
                            }
                    }
                    if(j%2==1&&a>0)
                        {
                            if(a<=x)
                            {
                                w=w-a;
                                a=0;
                            }
                            else
                                {
                                    w=w-x;
                                    a=a-x;
                                }
                        }
                }
                if(w>0)
                    cout<<"no"<<endl;
                else
                    cout<<"yes"<<endl;
            t--;
}
return 0;
}
