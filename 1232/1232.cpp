#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str;
    while(true)
    {
        cin >> str;
        if(str != "#")
        {
            string result;
            int max = 0;
            for(int i = 0;i < str.length();i++)
            {
                for(int j = 1;i+j <= str.length();j++)
                {
                    string temp1 = str.substr(i,j);
                    string temp2 = temp1;
                    reverse(temp2.begin(),temp2.end());
                    if(temp2 == temp1 && temp1.length() > max)
                    {
                        result = temp1;
                        max = temp1.length();
                    }
                }
            }
            cout << result << endl;
        }
        else
            return 0;
    }
    return 0;
}
