#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int ch=65;
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<char(ch)<<" ";
            ch++;
        }
        cout<<endl;
    }
}
