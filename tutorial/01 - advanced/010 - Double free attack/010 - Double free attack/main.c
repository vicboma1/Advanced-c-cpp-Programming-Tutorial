//
//  main.c
//  010 - Double free attack
//
//  Created by Victor Bolinches Marin on 02/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZER1   512
#define BUFSIZER2   ((BUFSIZER1/2) - 8)

void showExample010(int argc, const char * argv[]){
    char *buf1R1;
    char *buf2R1;
    char *buf2R2;
    char *buf3R2;
    
    buf1R1 = (char *) malloc(BUFSIZER1);
    buf2R1 = (char *) malloc(BUFSIZER1);
    
    free(buf2R1);
    printf("char *buf2R1 = %c,  Address = %u\n", *buf2R1, &buf2R1);

    
    buf2R2 = (char *) malloc(BUFSIZER2);
    buf3R2 = (char *) malloc(BUFSIZER2);
    
    strncpy(buf2R1, *argv+1, BUFSIZER1-1);
   
    free(buf1R1);
    printf("char *buf1R1 = %c,  Address = %u\n", *buf1R1, &buf1R1);
    free(buf2R2);
    printf("char *buf2R2 = %c,  Address = %u\n", *buf2R2, &buf2R2);
    free(buf3R2);
    printf("char *buf3R2 = %c,  Address = %u\n", *buf3R2, &buf3R2);
    
}

int main(int argc, const char * argv[]) {
    showExample010(argc, argv);
    return 0;
}
