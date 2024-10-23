#include <stdio.h>

int ReturnMax(int x , int y)
{

    return (x>y) ? x:y;

}

int main(){

    int max = ReturnMax(3,4);

    printf("%d",max);
    
    return 0;
    
}