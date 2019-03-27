#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int s;              // s = size number
    int index=0;
    int array [s];

    cout<<" Please enter the size number of your array: ";
    cin>>s;

    for (int i=1;i<=s;i++)
    cin>>array[i];

    for (int i=1;i<=s;i++)
    if (array[i]<array[index])
    index=i;

    cout<<" The minimum value in your array is :"<<endl;
    cout<<array[index];

    system("PAUSE");
    return EXIT_SUCCESS;
}
