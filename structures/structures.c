# include<stdio.h>
# include<string.h>
struct Books_details
{
    char name[50];
    char author[50];
    int price;
}book;

void printstuct(struct Books_details bk)
{
    printf("The Name of the Book is %s\n\n",bk.name);
    printf("The Name of the Author is %s\n\n",bk.author);
    printf("The price of the book is %d\n\n",bk.price);
}
int main(){

    struct Books_details bk1,bk2;
    strcpy(bk1.name,"mina no nihongo");
    strcpy(bk1.author,"whoever");
    bk1.price = 670;
    
    strcpy(bk2.name,"mina no nihongo II");
    strcpy(bk2.author,"whoever");
    bk2.price = 190;

    printstuct(bk1);
    printstuct(bk2);
    
    return 0;
}