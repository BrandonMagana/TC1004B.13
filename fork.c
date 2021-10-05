#include <stdio.h>
#include <unistd.h>

int main(){
    int pid = fork();
    if( pid==0){
        printf("soy el proceso hijo; pid = %d\n",pid);
    }else{
        printf("soy el proceso padre; pid = %d\n",pid);
    }
    return 0;
}