#include <iostream>

using namespace std;

int main()
{
    int coef,n;
    cout<<"Enter number for Pascals Triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
    coef = 1;
    for(int j=n-i;j>0;j--)
    {
    cout<<" ";
    }
        for(int k=1;k<=i;k++)
        {
            cout<<coef<<" ";
            coef = coef*(i-k)/k;
        }
        cout<<endl;
    }
        
    

    return 0;
}