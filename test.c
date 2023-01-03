#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char* argv[]) {
  void* ptr = malloc(sizeof(char));
  free(ptr);
  memset(ptr, 0, sizeof(char) * 2);
  return 0;
}
