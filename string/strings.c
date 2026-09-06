// String is the collection and sequence of the  characters.....

# include<stdio.h>
# include<string.h>

int main(){
    char my_string[3] ={'m','y','\0'}; // \0 this is null tells where our string ends
    char str1[23],str2[34],str3[56];
    printf("Our string is (%s)\n",my_string);
    strcpy(str1,my_string);
    printf("Our string is (%s)\n",str1);

    return 0;
}