#include <iostream>
using namespace std;
int main()
{
int a[50],size;
cout<<" Enter Size:";
cin>>size;
cout<<"Enter Array:";
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
for(int k=0;k<size;k++)
{

for(int i=k;i<=size;i++)
{
    for(int j=k;j<i;j++)
    {
       cout<<a[j]<<" ";
    }
    cout<<endl;
}
}
    return 0;
}