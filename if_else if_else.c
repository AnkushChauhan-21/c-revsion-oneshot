// lets talk about if else and if else if else ladder
# include<stdio.h>
int main(){
    int age;
    printf("\n User Enter Your Age here : ");
    scanf("%d",&age);
    printf("Lets check are You Eligible for Driving the car or not :::::\n");
    if(age>=18)
    {
        printf("As you are %d Years old you can drive the car\n",age);
    }
    else if(age<18 && age==0)
    {
        printf("As You Are %d years Old You can drive the car Right now...\n",age);
    }
    else{
        printf("The input age is not a positive Number Are you Ghost or What????????\n");
    }


    return 0;
}