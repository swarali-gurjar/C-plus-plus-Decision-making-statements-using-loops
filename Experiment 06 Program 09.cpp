#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int beta=65;
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<char(beta)<<" ";
            beta++;
        }
        cout<<endl;
    }
}
