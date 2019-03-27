#include<iostream>
using namespace std;
int main()
{
    int a[101],l,i,f,t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        f=0;
        if(a[0]==1&&a[n-1]==a[0])
        {
            if(n%2==0)
            {
                l=(n-2)/2;
            }
            else
			{
				l=(n-1)/2;
			}
			for(i=1;i<l&&f==0;i++)
			{
				if(a[i]==a[n-i-1]&&(a[i]==a[i-1]+1||a[i]==a[i-1]))
				{
					f=0;
				}
				else
				{
                    f=1;
				}
			}
			if(f==0)
			{
				if(n%2==0&&a[i]==7&&a[i]==a[n-i-1])
				{
					cout<<"yes"<<endl;
				}
				else if(n%2!=0 && a[i]==7)
				{
					cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
				}
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
		else
		{
			cout<<"no"<<endl;
        }
        t--;
    }



    return 0;
}
