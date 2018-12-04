#include <iostream>
#include <math.h>
using namespace std;
double f(int n)
{
    int count=0;
    while(!(n%2))
    {
        count++;
        n=n/2;
    }
    return pow(2,count);
}
int main()
{
    int k,i,j;
    int count=1;
    cin >> k;
    while(k--)
    {
        int s;
        cin >> s;
        cout << "Case #" << count<<": "<<f(s)<< endl;
        count++;
    }
    return 0;
}
