
#include<stdio.h>
int main(){
    char s[123];
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%s",s);
    int len=0;

    while(s[len] != '\0'){
        len++;
    }
    if(len>10){
        printf("%c%d%c\n",s[0],len-2,s[len-1]);
    }else{
        printf("%s",s);
    }
    }
    return 0;
}
