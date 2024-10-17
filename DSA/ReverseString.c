#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void revStr(char str[],int s, int e){
    if(s>=e){
        return;
    } else{
        char t=str[s];
        str[s]=str[e];
        str[e]=t;
        revStr(str,s+1,e-1);

    }
}
int main(){
    printf("Enter the string to reverse : \n");
    char str[100];
    scanf("%[^\n]%*c",str);
    int n=strlen(str);

    revStr(str,0,n-1);
    printf("The rev string is: \n%s",str);
    return 0;
}