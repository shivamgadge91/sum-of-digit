#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a mumber:";
    cin>>n;
    int sum=0;
    while(n!=0)
    {
        int ld=n%10;
        n/=10;
        sum+=ld;
    }
    cout<<"Sum of digits is:"<<sum;
    return 0;
}
/*Enter a mumber:635416
Sum of digits is:25*/