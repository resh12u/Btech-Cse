#include<stdio.h>
#include<string.h>

void toh(int n,char from,char to,char aux){
    if(n==1){
        printf("Move dic 1 from %c to %c\n",from,to);
        return;
    }
    toh(n-1,from,aux,to);
    printf("Move dic %d from %c to %c\n",n,from,to);
    toh(n-1,aux,to,from);

}

int main(){
    int n;
    printf("Enter the Number of dics \n");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}