#include <stdio.h>
#include <unisd.h>

int main(int argc, char *argv[]){
char *cmd = "";
int stat;
stat = system(cmd);
return stat;
}
///sh4-linux-gnu-gcc march=sh4 -o sh4 sh4.c