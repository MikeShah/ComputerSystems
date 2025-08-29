#include <stdio.h>

int main(){

    int myFavoriteNumbers[3];        
    
    myFavoriteNumbers[0] = 500;
    myFavoriteNumbers[1] = 7;
    myFavoriteNumbers[2] = 13;

    for(int i = 0; i < 3; i = i +1)
    {
        if(13 == myFavoriteNumbers[i]){
            printf("13 is a favorite number!\n");
        }
    }


    return 0;
}
