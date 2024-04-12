#include<iostream>
using namespace std;
int pattern(int r)
{
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
}

int main()
{
    int r;
    cin>>r;
    pattern(r);
}