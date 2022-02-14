/* A simple program of printing the book detials using the stucture*/
#include <stdio.h>
#include<string.h>

struct book{
    char title[30];
    char auther[30];
    int book_id;
};

int main()
{
    struct book book1;/* Declare Book1 of type Book */
    struct book book2;/* Declare Book2 of type Book */
    
    
    /*books specificaations*/
    strcpy(book1.title,"Rich Dad  poor Dad \n");
    strcpy(book1.auther,"Rober Kiyosaki\n");
    book1.book_id=644;
    
    printf("book name is: %s",book1.title);
    printf("Auther of book is: %s",book1.auther);
    printf("book id  is: %d",book1.book_id);

    return 0;
}
