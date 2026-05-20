#include<iostream>
using namespace std;

int countodddigits(int n)
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
            int r=n%10;
            if(r%2==1)
            {
                count++;
            }
            n/=10;
        }
    return count;
    }

}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count=countodddigits(n);
    cout<<"The answer is "<<count;
}