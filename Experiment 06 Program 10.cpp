//Printing hourglass star pattern
#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
int n = 5;

for (i =5; i >=1; i--)
{
    for (int k=0;k<n-i;k++)
    cout<<" ";
    
    for (j = 1; j <= i; j++)
    {
        cout << "* ";
    }
    cout << endl;
}
for (i =2; i <=n; i++)
{
    for (int k=0;k<n-i;k++)
    cout<<" ";
    
    for (j = 1; j <= i; j++)
    {
        cout << "* ";
    }
    cout << endl;
}
}
