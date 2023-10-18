#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  long res = syscall(335);
  printf("System call returned %ld.\n", res);
  return res;
}

