#include<iostream>
using namespace std;

bool palindrome(int n)
{
    int rev=0;
    int temp=n;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n/=10;

    }
    return rev==temp;
}

int main()
{
    int n;
    cout<<"Enter the number to be checked: ";
    cin>>n;

    if(palindrome(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}