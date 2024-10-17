#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int pal(char str[],int s,int e){
    if(s>=e)
        return 1;
    if (str[s]!=str[e])
        return 0;
  return pal(str,s+1,e-1);
       
}

int main(){
    char str[100];
    printf("Enter the palindrome word to check: \n");
    fgets(str,sizeof(str),stdin);
    int n =strlen(str);
    if(pal(str,0,n-2)){
        printf("it is palindrome.\n");
    } else{
        printf("Not a palindrome.\n");
    }
    return 0;
}