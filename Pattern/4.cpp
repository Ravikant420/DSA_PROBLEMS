#include<iostream>
using namespace std;
int pattern(int r)
{
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i+1;j++)
        {
            cout<<"* ";
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
/*


* * * * *
* * * *
* * *
* *
*

*/