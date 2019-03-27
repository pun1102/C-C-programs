#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int i,index,N;
        index=0;
        cin>>N;
        int A[N];
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<N;i++)
        {
            if (A[i]<A[index])
            index=i;
        }
        cout<<index+1<<endl;
        T--;
    }


return 0;
}
