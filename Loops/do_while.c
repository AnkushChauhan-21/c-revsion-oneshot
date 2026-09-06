// this one and while loop only has one difference is that it runs at least one time even if the condition is not matched but while will not run until it matches the condition

# include<stdio.h>
int main(){
   int o =0;
    do{
    printf("I will run this time but not again cause condition is not matched"); 
    }while(o>20000);

    return 0;
}