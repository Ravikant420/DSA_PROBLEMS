#include<iostream>
using namespace std;

//  Method 1
int method1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch ='A';ch<='A'+i; ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

//method2
int method2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(char)(65+j-1);
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    method1(n);
    //method2(n);
}


// output

// 5
// A
// AB
// ABC
// ABCD
// ABCDE