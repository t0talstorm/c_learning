// A loop inside a loop

#include <stdio.h>

int main()
{
    int rows , coloumns;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    printf("Enter number of coloumns : ");
    scanf("%d",&coloumns);

    for (int i = 1 ; i <= rows ; i++){

        for (int j = 1; j <= coloumns; j++)
        {
            printf("%d",j);

        }
          printf("\n");
        
    }

    return 0;
}
