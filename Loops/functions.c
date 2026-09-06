// syntax for the functions 
 /*data_type func_name(parameters_type parameter name){
   return value_of_type_of(data_type);
} */

# include<stdio.h>
// lets create a global variable that we can use in our current program
int glo_var = 67; 
 void sameprint(char * char1)
{
    printf("You Printed the %s\n",char1);
}

int sum(int a,int b)
{
    return a+b;
}


float average(float a,float b)
{
    return (a+b)/2;
}
int main(){

    // lets create the local variable with same name as our global variable and lets see what happens
    int glo_var = 5667;
    // we can see the global value has been replaced with the value of our local variable cause in this situations local takes more priority or any suitable word that can be used instead of the variable
    sameprint("Hello World");
    printf("The sum value is %d \n",sum(10,50));
    printf("The sum value is %.2f \n",average(0,57));
    printf("Lets print the global variable we created above %d",glo_var);// it is changed 
    return 0;
}