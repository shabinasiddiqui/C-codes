#include<iostream>
using namespace std;

class Solution{
    public:
    int reverse(int x){
        int rev=0;
        while(x>0){
            rev = rev*10 +x%10;
            x=x/10;
        }
        return rev;

        
    }

};
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    Solution obj;
    cout<<obj.reverse(n);
}
