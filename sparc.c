#include <stdio.h>
#include <unisd.h>

int main(int argc, char *argv[]){
char *cmd = "";
int stat;
stat = system(cmd);
return stat;
}
///sparc-linux-gnu-gcc march=sparc -o sparc sparc.c