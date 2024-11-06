#include <stdio.h>
#include <string.h>

 struct book {
     char title[100];
    char author[100];
    float price;
    int pages;
    int volume;
} ;

int main(){

    // struct book book1 = {"The martian" , "andy weir" , 500 , 369 , 1};
    // struct book book2 = {"project hail mary","andy weir", 450 ,496,2};
    // struct book book3 = {"Deeop work","cal newport",600 , 250 ,4};
    // struct book book4 = {"so good they cant ignore you","cal newport",790,304,1};
    struct book book1 , book2 , book3 , book4 ,book5 , book6 , book7 , book8 , book9 , book10;

    printf("size of book1 : %d\n",sizeof(book1));

    printf("size of float : %d\n",sizeof(float));
    printf("size of int : %d\n",sizeof(int));
    // creating a array 

    struct book books[] ={book1,book2,book3,book4,book5,book6,book7,book8,book9,book10};

    //to take input from user
    for (int i = 0 ; i <sizeof(books)/sizeof(books[0]);i++){
        printf("Enter the title of the book : ");
        scanf("%s",books[i].title);
        printf("Enter the author of the book : ");
        scanf("%s",books[i].author);
        printf("Enter the price of the book : ");
        scanf("%f",&books[i].price);
        printf("Enter the pages of the book : ");
        scanf("%d",&books[i].pages);
        printf("Enter the volume of the book : ");
        scanf("%d",&books[i].volume);
    }

    printf("size of books : %d\n\n\n",sizeof(books));

    for (int i = 0 ; i <sizeof(books)/sizeof(books[0]);i++){

        
        printf("title : %s\t",books[i].title); 
        printf("author : %s\n",books[i].author);
        printf("pages : %d\n",books[i].pages);
        printf("price: %.2f\n",books[i].price);
        printf("volume : %d\n\n",books[i].volume);

    }

    return 0;
}