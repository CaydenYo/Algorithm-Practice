#include <iostream>
using namespace std;

int main()
{
    string exp;
    int n;
    cin >> n;
    while(n){
        cin >> exp;
        int i,a = 0,b = 0, c = 0;
        for(i = 0;exp[i] != '+';i++)
            a = a * 10 + exp[i] - '0';
        for(i++;exp[i] != '-';i++)
            b = b * 10 + exp[i] - '0';
        for(i++;i < exp.length();i++)
            c = c * 10 + exp[i] - '0';
        cout << a + b - c << endl;
        n--;
    }
    return 0;
}
