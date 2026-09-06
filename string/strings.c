// String is the collection and sequence of the  characters.....

# include<stdio.h>
# include<string.h>

int main(){
    char my_string[3] ={'m','y','\0'}; // \0 this is null tells where our string ends
    char str1[23],str2[34],str3[56];
    printf("Our string is (%s)\n",my_string);
    strcpy(str1,my_string);
    printf("Our string is (%s)\n",str1);
    strcpy(str1,"I am a copy");
    printf("Our string is (%s)\n",str1);
    strcpy(str2,"i am a addition");
    printf("Our string is (%s)\n",str2);
    strcat(str1,str2);
    printf("Our string is (%s)\n",str1);
   
    printf("%d",strcmp(str1,str2)); // if str1 == str2 it returns the 0
    // if str1 > str2 it returns 1
    //  if str1 < str2 it returns the -1
    // it checks the  alphabet numbers suppose a anb  z is greator then the a ,,so z id greater
    return 0;
}