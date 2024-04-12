//Input number rows and columns to create a rectangle filled with . 
#include<iostream>
using namespace std;

int pattern(int r,int w)
{
    for(int i=0;i<r;i++)
    {
        for (int j=0;j<w;j++)
        {
            cout<<".";
        }
        cout<<endl;
    }
}
int main()
{
    int r,w;
    cout<<"Enter the number of rows :";
    cin>> r;
    cout<<"Enter the number of columns :";
    cin >> w;
    pattern(r,w);
}