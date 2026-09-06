// what is a pointer ??
// Pointer stored the address of the other variables thats it . it also has the ability to change the value in that variable cause it has its address stored in it 
# include<stdio.h>
int main(){
    int a = 45;
    printf("The value of a is %d \n",a);
    
    int * int_ptr = NULL;
    if(int_ptr) // is pointer is pointing towrads anything
    {
        printf("Pointer is pointing towards some thing");
    }
    else{   // is pointer is null
        printf("pointer is null\n");
    }
    int_ptr = &a;
    *int_ptr = 233333;
    
    printf("The value of a is %d \n",a);

    return 0;

}