#include<iostream>
using namespace std;

int pattern(int n)
{
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"   ";
        }
        for(int j=1;j<=2*(n-i) +1;j++)
        {
            cout<<" * ";
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
//  *  *  *  *  *  *  *  *  * 
//     *  *  *  *  *  *  *
//        *  *  *  *  *
//           *  *  *
//              *