#include<iostream>
using namespace std;
int main()
{
    int n;
    int rev=0;
    int rem;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"Reverse No. = "<<rev<<endl;
    if (temp==rev){
        cout<<"It is a palindrome Number"<<endl;
    }
    else
    {
        cout<<"It is not a palindrome Number"<<endl;
    }
}