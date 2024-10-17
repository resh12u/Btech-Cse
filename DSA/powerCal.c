#include<stdio.h>
int pwr(int n,int expo){
    if(expo==0){return 1;}
    else{
        return n*pwr(n,expo-1);
    }
}

int main(){
    printf("\nEnter the Natural number and its power: \n");
    int n ,expo;
    scanf("%d %d",&n,&expo);
    int res=pwr(n,expo);
    printf("The answer of %d^%d Naural numbers is: %d\n",n,expo,res);
    return 0;

}
