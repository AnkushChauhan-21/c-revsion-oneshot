# include<stdio.h>
int main(){
    int user_array[10]={23,34,546,13,51,456,234,652,4,6};
    int index;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the index  :: \n");
        scanf("%d",&index);

        printf("The value for the  index{%d} is %d\n\n6", index, user_array[index]);
    }
    return 0;
    
}