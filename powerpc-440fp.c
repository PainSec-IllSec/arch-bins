#include <stdio.h>
#include <unisd.h>

int main(int argc, char *argv[]){
char *cmd = "";
int stat;
stat = system(cmd);
return stat;
}
///powerpc-linux-gnu-gcc march=powerpc-440fp -o powerpc-440fp powerpc-440fp.c