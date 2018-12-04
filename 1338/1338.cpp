#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int data[101][101];
int prime[10000];

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

void Prime()
{
    int count = 0;
    int i = 2;
    while(count < 9999){
        if(isPrime(i)){
            prime[count] = i;
            count++;
        }
        i++;
    }
}

int main()
{
    Prime();
    int group;
    int n,m;
    cin >> group;
    while(group){
        cin >> n >> m;
        int data[n][m];
        int count = 0;
        //按列填数字
        for(int j = 0;j < m;j++){
            if(j % 2 == 0){
                for(int a = 0;a < n;a++){
                    data[a][j] = prime[count];
                    count++;
                }
            }else{
                for(int a = n - 1;a >= 0;a--){
                    data[a][j] = prime[count];
                    count++;
                }
            }
        }
        //打印矩阵
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cout << setw(6) << data[i][j];
            }
            cout << endl;
        }
        group--;
    }
    return 0;
}

/*#include <iostream>
#include <cmath>
using namespace std;

bool prime(int x)
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
    int n,m;
    cin >> group;
    while(group){
        cin >> n >> m;
        int data[n][m];
        int num = 2;
        int i = 0;
        //按列填数字
        for(int j = 0;j < m;j++){
            if(i == 0){
                for(int a = 0;a < n;a++,i++){
                    while(!prime(num)){
                        num++;
                    }
                    data[a][j] = num;
                    if(num == 2){
                        num++;
                    }else{
                        num += 2;
                    }
                }
            }else if(i == n){
                for(int a = n - 1;a >= 0;a--,i--){
                    while(!prime(num)){
                        num++;
                    }
                    data[a][j] = num;
                    if(num == 2){
                        num++;
                    }else{
                        num += 2;
                    }
                }
            }
        }
        //打印矩阵
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cout << "     " << data[i][j];
            }
            cout << endl;
        }
        group--;
    }
    return 0;
}*/
