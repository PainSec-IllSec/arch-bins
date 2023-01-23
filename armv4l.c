#include <stdio.h>
#include <unisd.h>

int main(int argc, char *argv[]){
char *cmd = "";
int stat;
stat = system(cmd);
return stat;
}

///arm-linux-gnueabi-gcc march=arm4l -o arm4l arm4l.c