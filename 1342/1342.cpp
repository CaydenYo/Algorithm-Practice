#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int OctToDec(string oct, int len)
{
    int sum = 0;
    for(int i = len - 1;i >=0;i--)
    {
        int n = oct[i] - '0';
        sum += n*pow((double)8, len-1-i);
    }
    return sum;
}

string DecToBin(int dec)
{
    string bin = "";
    while(dec >= 1)
    {
        bin += (dec % 2) + '0';
        dec /= 2;
    }
    reverse(bin.begin(),bin.end());
    return bin;
}

string BinToHex(string bin)
{
    string hex = "";
    string temp = "";
    int sum = 0;
    while(bin.length() > 4)
    {
        temp = bin.substr(bin.length() - 4,bin.length()-1);
        string result = "";
        for(int i = 3;i >=0;i--)
        {
            int n = temp[i] - '0';
            sum += n*pow((double)2, 3-i);
            if(sum >=0 && sum <= 9)
            {
                result = sum +'0';
            }
            else
            {
                switch(sum)
                {
                    case 10:
                        result = "A";
                        break;
                    case 11:
                        result = "B";
                        break;
                    case 12:
                        result = "C";
                        break;
                    case 13:
                        result = "D";
                        break;
                    case 14:
                        result = "E";
                        break;
                    case 15:
                        result = "F";
                        break;
                }
            }
        }
        hex += result;
        sum = 0;
        bin = bin.substr(0,bin.length() - 4);
    }
    for(int i = bin.length()-1;i >=0;i--)
    {
        int n = bin[i] - '0';
        sum += n * pow((double)2, bin.length()-1-i);
    }
    hex += sum + '0';
    reverse(hex.begin(),hex.end());
    return hex;
}
int main()
{
    int group;
    cin >> group;
    for(int i = 0;i < group;i++)
    {
        string oct;
        cin >> oct;
        int len = oct.length();
        int dec = OctToDec(oct,len);
        string bin = DecToBin(dec);
        string hex = BinToHex(bin);
        cout << hex << endl;
    }
    return 0;
}
