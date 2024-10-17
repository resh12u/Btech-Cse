#include<stdio.h>
int sum(int n){

    if(n%10==0){return n;}
    else{
        return n%10+sum(n/10); 
    }
}

int main(){
    printf("\nEnter the Natural number: \n");
    int n;
    scanf("%d",&n);
    int res=sum(n);
    printf("The sum of %d Naural numbers is: %d\n",n,res);
    return 0;

}
