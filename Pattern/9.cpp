#include<iostream>
using namespace std;

int pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
            
        }cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<"\n\n";
    pattern(n);
}



// 5


// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1