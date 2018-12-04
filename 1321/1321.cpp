#include <iostream>

using namespace std;
int n,data[501];
int main()
{
    while(!(cin>>n).eof())
    {
        for(int i=0;i<n;i++)
            cin>>data[i];
        int count =0;
        for(int i = 0;i < n;i++)
           for(int j = i+1;j < n;j++)
           {
            if(data[j]==(-data[i])){
                count++;
                break;
            }
           }
        cout<<count<<endl;
    }
    return 0;
}
