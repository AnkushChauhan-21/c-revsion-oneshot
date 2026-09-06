
/*type casting is changing the type of our output to get the output we want because their are two outputs one we desire and other is an actual output of our code so for example lets try with an example 
    */
   
# include<stdio.h>
int main(){
    int user_desire_input_int ;
    printf("\n Please Enter a int value here: ");
    // %_ is a format specifier and & is the address we are storing this value in associated address in  a way
    scanf("%d",&user_desire_input_int);
    printf("\n The Int value You entered is : %f",(float)user_desire_input_int);


    int num1 , num2;
    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("The answer of this answer after typecasting is %f",(float)num1/num2);
    return 0;
}   
    


