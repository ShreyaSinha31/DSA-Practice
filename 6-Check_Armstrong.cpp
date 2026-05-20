#include<iostream>
using namespace std;

bool Armstrong(int n,int count)
{
    int sum=0;
    int temp=n;

    while(n!=0)
    {
        int r=n%10;
        sum=sum+pow(r,count);
        n/=10;
    }
    return temp==sum;
}

int main()
{
    int n,count=0;
    cout<<"Enter the number to be checked: ";
    cin>>n;

    int temp=n;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }

    if(!Armstrong(n,count))
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }

    return 0;
}