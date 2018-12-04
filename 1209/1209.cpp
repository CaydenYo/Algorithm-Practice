#include <iostream>
using namespace std;

int main()
{
    int a1,a2;
    int b1,b2;
    int c1,c2;
    a1 = a2 = b1 = b2 = c1 = c2 = 0;
    while(true)
    {
        cin >> a1 >> a2;
        if(a1 == 0 && a2 == 0)
        {
            return 0;
        }
        else
        {
            //A矩阵初始化
            int A[a1][a2];
            for(int i = 0;i < a1;i++)
            {
                for(int j = 0;j < a2;j++)
                {
                    cin >> A[i][j];
                }
            }
            //B矩阵初始化
            cin >> b1 >> b2;
            int B[b1][b2];
            for(int i = 0;i < b1;i++)
            {
                for(int j = 0;j < b2;j++)
                {
                    cin >> B[i][j];
                }
            }
            //C矩阵初始化
            cin >> c1 >> c2;
            int C[c1][c2];
            for(int i = 0;i < c1;i++)
            {
                for(int j = 0;j < c2;j++)
                {
                    cin >> C[i][j];
                }
            }
            if(a2 != b1 || c1 != a1 || c2 != b2)
            {
                cout << "No" << endl;
            }else
            {
                //计算A矩阵xB矩阵
                int sum = 0;
                int result[a1][b2];
                for(int i = 0;i < a1;i++)
                {
                    for(int j = 0;j < b2;j++)
                    {
                        for(int k = 0;k < a2;k++)
                        {
                            sum += A[i][k] * B[k][j];
                        }
                        result[i][j] = sum;
                        sum = 0;
                    }
                }
                //判断是否与C相等
                int count = 0;
                bool isEqual = true;
                for(int i = 0;i < c1;i++)
                {
                    for(int j = 0;j < c2;j++)
                    {
                        if(C[i][j] != result[i][j])
                        {
                            isEqual = false;
                        }
                        else
                        {
                            count++;
                        }
                    }
                }
                if(count == c1 * c2 && isEqual)
                {
                    cout << "Yes" << endl;
                }
                else if(!isEqual)
                {
                    cout << "No" << endl;
                }
            }
        }
    }
    return 0;
}
