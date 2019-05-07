#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "helpers.h"
#include "menu_principal.h"
#include "intro.h"

int main(int argc, char** argv) {
  // print_intro();
  // menu_principal();
  u_janela(1, 2, 10, 10);
  u_janela(11, 11, 30, 30);
  u_janela(31, 31, 80, 40);
  u_janela(70, 1, 100, 10);
  system("clear");
  gotoxy(150, 40);
  printf("Volte sempre!");
  return (EXIT_SUCCESS);
}
