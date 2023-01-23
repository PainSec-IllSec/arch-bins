#include <stdio.h>
#include <unisd.h>

int main(int argc, char *argv[]){
char *cmd = "";
int stat;
stat = system(cmd);
return stat;
}
///mipsl-linux-gnu-gcc march=mipsel -o mipsel mipsel.c