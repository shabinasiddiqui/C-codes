#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int temp =x,rem=0,rev=0;
        
        while(x>0){

            rev = rev*10+x%10;
             x=x/10;
        }
        if(temp==rev){
            return true;
        }
        return false;
        
    }
};

int main()
{
    int x;
    cout<<"enter a number";
    cin>>x;
    Solution obj;
    cout<<obj.isPalindrome(x);

    return 0;
}