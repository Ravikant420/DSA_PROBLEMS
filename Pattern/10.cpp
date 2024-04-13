#include<iostream>
using namespace std;

int pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        //number
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }

        //space
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }

        //number
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pattern(n);
}


// 5
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321