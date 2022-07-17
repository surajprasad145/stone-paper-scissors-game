#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int stonepaperscissor(char per, char cmp){
//9 condtions possible all are checked
if (per == cmp){
    return 0;
}

if (per == 's' &&  cmp == 'p'){
    return -1;
}
else if ( per == 'p' && cmp == 's'){
    return 1;
}

if (per == 'c' &&  cmp == 's'){
    return -1;
}
else if ( per == 's' && cmp == 'c'){
    return 1;
}

if (per== 'p' &&  cmp == 'c'){
    return -1;
}
else if ( per == 'c' && cmp == 'p'){
    return 1;
}
    }



int main() {
    char per;
    char cmp;
    //random number generator
    srand(time(0));
    int num=rand()%100;
    
    if (num<33){
        cmp= 's' ;
    }
    else if (num>33 && num<66){
        cmp= 'p' ;
    }
     else {
        cmp= 'c' ;
    }
    
    printf (" Choose either s for stone, p for paper and c for scissors \n");
    scanf("%c",&per);
    
    char res = stonepaperscissor(per, cmp);
    printf("person choosed %c and computer choosed %c \n", per ,cmp);
    
    if (res == 0 ){
    printf("The Game is draw \n");
}

else if (res == 1){
    printf("The Game is winned by you  \n");
}
    
  else {
       printf("The game is lost by you  \n");
   }
   
   return 0;
}