# include<stdio.h>
int main(){
    int user_desire_input_int ;
    printf("\n Please Enter a int value here: ");
    // %_ is a format specifier and & is the address we are storing this value in associated address in  a way
    scanf("%d",&user_desire_input_int);
    printf("\n The Int value You entered is : %d",user_desire_input_int);

    return 0;
}