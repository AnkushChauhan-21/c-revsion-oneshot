// Lets try some realtional operators they give values in boolean values (True and False)

// test code we are not gonna use if else right now cause that for next seperate topic so basic 

# include<stdio.h>
# include<stdbool.h>
int main(){
    int a,b;
    bool result;
    printf("Enter the value for a and b to compare : ");
    scanf("%d %d",&a,&b);
    
    // Lets compare them first > and < this operators
     result = (a>b);
    printf("Is a > b?? %s\n",result ? "True" : "False");

    //demo code 2
    result = (a==b);
    printf("Is a = b?? %s\n",result ? "True" : "False");

    //demo code 3
    result = (a<b);
    printf("Is a < b?? %s\n",result ? "True" : "False");

    return 0;
}