#include<iostream>
using namespace std;

int count_digits(int n)
{
    int count=0;
    if(n==0)
    {
        return 1;
    }

    else
    {
        while(n!=0)
        {
            count++;
            n/=10;
        }
        return count;
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    

    int count=count_digits(n);
    cout<<"The answer is "<<count;
}