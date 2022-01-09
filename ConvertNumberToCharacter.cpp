#include <iostream>
#include<vector>
using namespace std;

int main()

{   int n,rev=0,ele=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        rev = rev*10 + n%10;
        n=n/10;
    }
    while(rev>0){
        ele= rev%10;
       rev=rev/10;
        switch(ele){
            case 1:cout<<"one"<<" ";
            break;
            case 2:cout<<"two"<<" ";
            break;
            case 3:cout<<"three"<<" ";
            break;
            case 4:cout<<"four"<<" ";
            break;
            case 5:cout<<"five"<<" ";
            break;
            case 6:cout<<"six"<<" ";
            break;
            case 7:cout<<"seven"<<" ";
            break;
            case 8:cout<<"eight"<<" ";
            break;
            case 9:cout<<"three"<<" ";
            break;
            case 0:cout<<"zero"<<" ";
            break; 
            default: cout<<"invalid input";
    
        }
        
    }
 
    return 0;   
}
