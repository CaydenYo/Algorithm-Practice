#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if(x == 2)
        return true;
    for(int i = 2;i < sqrt(x) + 1;i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int group;
    cin >> group;
    for(int i = 0;i < group;i++)
    {
        int total, num, start, data;
        cin >> total >> num >> start >> data;
        bool isRight = true;
        while(start != num)
        {
            if(isPrime(data))
                isRight = !isRight;
            if(isRight == true)
            {
                data += 1;
                start += 1;
                if(start > total)
                    start = 1;
            }
            else
            {
                data += 1;
                start -= 1;
                if(start < 1)
                    start = total;
            }
        }
        if(isPrime(data))
        {
            cout << "duang" << endl;
        }
        else
        {
            cout << data << endl;
        }
    }

    return 0;
}
