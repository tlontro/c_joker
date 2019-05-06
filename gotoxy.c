#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h"
#include "menu_principal.h"

int main(int argc, char** argv) {
  menu_principal();
  system("clear");
  printf("Volte sempre!");
  return (EXIT_SUCCESS);
}
