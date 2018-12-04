#include<stdio.h>
#include<string.h>
int main(){
    char str[80],ctr[80],sign;
    int j=0;
    while(true)
    {
    gets(str);
    int n=strlen(str);
    str[n]=' ';
    str[n+1]='\0';
    memset(ctr,'\0',sizeof(ctr));
    for(int i=0;i<n+1;i++){
        if(str[i]!=' '){
            if(str[i] >= 'a' && str[i] <= 'z' ||
               str[i] >= 'A' && str[i] <= 'Z')
               {
                    ctr[j++]=str[i];
               }
            else
            {
                sign = str[i];
            }
        }
        else{
            for(int k=j-1;k>=0;k--){
                printf("%c",ctr[k]);
            }
            if(sign != '\0')
            {
                printf("%c",sign);
            }
            sign = '\0';
            j=0;
            memset(ctr,'\0',sizeof(ctr));
            if(i!=n){
                printf(" ");
            }
            else printf("\n");
        }
    }
    }
    return 0;
}
