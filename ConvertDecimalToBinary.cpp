#include <iostream>
#include<vector>
using namespace std;

int main()

{   
    
    vector<int> arr;
    int n,temp;
    cout<<"Enter a number";
    cin>>n;
    while(n>0){
        temp=n%2;
        arr.push_back(temp);
        n=n/2;
    }
    cout<<"Binary equivalent of a given number: ";
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }
 
    return 0;   
}