#include<iostream>
using namespace std;

int reverse(int n)
{
    int rev=0;

    if(n==0)
    {
        return 0;
    }

    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    return rev;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int rev=reverse(n);
    cout<<"Reverse is "<<rev;

    return 0;

}