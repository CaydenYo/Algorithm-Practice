#include <iostream>
#include <string.h>
#include <stdio.h>//getchar
using namespace std;
int main(){
    int n;
    scanf("%d",&n);//数字，cin会影响getchar
    while(n--){
        char input[10001];
        scanf("%s",input);
        //memset(input, '\0', sizeof(input));
        //读入时，遇到空白字符，包括空格，制表符，换行符时均会停止输入。
        //cout<<strlen(input)<<" "<<sizeof(input)<<endl;
        char binary[30010],ans[10001];
        int pos = 0;
        for(int i = strlen(input)-1;i >= 0;i--){
            int temp = input[i] - '0';
            for(int j = 0;j < 3;j++){
                binary[pos] = temp % 2 + '0';//左边是低位
                temp /= 2;
                pos++;
            }
        }
        //cout<<input<<endl;
        int _pos = 0;
        pos = 0;
        for(int i = 0;i < strlen(input)*3;i++){
            int x = 1,s = 0;
            for(int j = 0;j < 4 && i < strlen(input)*3;j++){
                if(binary[i] == '1'){
                    s += x;
                }else{
                    s += 0;
                }
                x *= 2;
                i++;
            }
            i--;
            if(s >= 0 && s <= 9){
                ans[_pos] = s + '0';
            }else{
                ans[_pos] = s + 55;
            }
            //cout<<s<<endl;
            _pos++;
        }
        int flag = 0;
        for(int i = _pos - 1;i >= 0;i--){
            if(ans[i] == '0' && flag == 0){
                continue;
            }else{
                flag++;
                cout<<ans[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
