#include <stdio.h>
#include <unisd.h>

int main(int argc, char *argv[]){
char *cmd = "";
int stat;
stat = system(cmd);
return stat;
}

///arm-linux-gnueabihf-gcc march=arm6l -o arm6l arm6l.c
