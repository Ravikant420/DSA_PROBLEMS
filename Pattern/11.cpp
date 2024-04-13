#include<iostream>
using namespace std;
int pattern(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
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
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15