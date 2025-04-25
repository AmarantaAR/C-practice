#include <stdio.h>

int main(){

    int note;

    printf("Insert the note:\n");
    scanf("%d", &note);

    if( note >= 4 && note < 7){
        printf("You can take the exam again\n(and you should hahah)\n"); 
    }
    else{

        pintf("You're off the media");
    }
}