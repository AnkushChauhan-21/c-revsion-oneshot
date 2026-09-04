// There  are many types of operator and one of them is a arithmetic operator used for doing basic mathematical functions
// Test Code
// + , - , * , % ,\ are some examples of the arithemetic operators

# include <stdio.h>
# include <math.h> // to tell compiler for maths library and functionality 
int main(){
    int a , b , c , d;
    int sum , diff , multiplication;
    float divison , modulas;
    // ask the user for the inputs now
    printf("Enter the values for each variable here : ");
    scanf("%d %d %d %d", &a , &b , &c ,&d);

    //Performing the additions
    sum = a + b;
    printf("The sum of the  %d + %d = %d\n",a,b,sum);
    
    // performing the diffrence 
    diff = a - b;
    printf("The sum of the  %d - %d = %d\n",a,b,diff);

    // Performing the Multiplications
    multiplication = c * d;
    printf("The multiplicaton of the %d * %d is %d\n",c,d,multiplication);


    // Performing the division
     divison = c/d;
    printf("The divison of the %d / %d is %f\n",c,d,divison);
   
    // Performing the modulas
     modulas = c%d;
    printf("The modulas of the %d  %d is %f\n",c,d,modulas);





   return 0; 
}