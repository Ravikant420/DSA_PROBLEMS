#include<iostream>
using namespace std;

int pattern(int n)
{
   for(int i=1;i<=n;i++)
    {
        for(char ch='A';ch<=n-i+1;ch++)
        {
            cout<<ch;
        }
    } 
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
}