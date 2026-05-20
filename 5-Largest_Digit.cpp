#include<iostream>
#include<cmath>
using namespace std;

int Largestdigit(int n)
{
    int max=0;
    while(n!=0)
    {
        int r=n%10;
        if(r>=max)
        {
            max=r;
        }
        n/=10;
    }
    return max;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int lar=Largestdigit(n);
    cout<<"The largest digit is: "<<lar;

    return 0;
}