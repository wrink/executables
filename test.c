#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    int i;
    for (i = 1; i < argc; i++) {
      printf("%s\n", argv[i]);
    }
  } else {
    printf("Hello World\n");
  }
}
