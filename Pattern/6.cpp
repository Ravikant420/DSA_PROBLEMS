#include<iostream>
using namespace std;

int pattern(int r)
{
    for(int i=1;i<=r;i++)
    {
        for(int k=i;k<r;k++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
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

// 10
//                   *
//                 * * *
//               * * * * *
//             * * * * * * *
//           * * * * * * * * *
//         * * * * * * * * * * *       
//       * * * * * * * * * * * * *     
//     * * * * * * * * * * * * * * *   
//   * * * * * * * * * * * * * * * * * 
// * * * * * * * * * * * * * * * * * * *   