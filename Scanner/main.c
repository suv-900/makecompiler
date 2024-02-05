#include "defs.h"
#include "global_data.h"
#include "decl.h"
#include<errno.h>

static void init(){
    Putchar=0;
    Line=1;
}
static void check(char* prog){
    fprintf(stderr,"Usage: %s infile\n",prog);
    exit(1);
}

static void scan_file(){
    char* arr[]={"+","-","*","/","intlit"};
    struct token T;

    while(scan(&T)){
        printf("Token %s",arr[T.token]);
        if(T.token == 4){
            printf(" value %d",T.int_value);
        }
        printf("\n");
    }
}


void main(int argc,char* argv[]){
    printf("No of args:%d\n",argc);
    
    if(argc != 2){
        check(argv[0]);
        exit(1);
    }

    check(argv[0]);
    
    if(File = fopen(argv[1],"r") == NULL){
        fprintf(stderr,"Unable to open file %s\n",argv[1]);
        exit(1);
    } 

    init();
    scan_file();
    exit(0);
}