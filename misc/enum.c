#include <stdio.h>

enum Day { Sun , Mon , Tue , Wed , Thu , Fri , Sat};

int main(){

    enum Day today = Mon;

    if(today == Sun || today == Sat){
        printf("yeppieee!!! weekend");
    }
    else{
        printf("oh no no no clg timeee :(");
    }
}