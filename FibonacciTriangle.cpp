#include <iostream>
using namespace std;

int main()

{  
 int n,first=1,second=1,res=0;
 cout<<"Enter a number: ";
 cin>>n;
 for(int i=0;i<n;i++){
     for(int j=0;j<=i;j++){
         res=first+second;
         cout<<first<<" ";
         
         first =second;
         second =res;
     }
     cout<<endl;
 }
 
    return 0;   
}
