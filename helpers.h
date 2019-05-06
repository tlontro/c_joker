void gotoxy(int x, int y) {
  printf("%c[%d;%df", 0x1B, y, x);
}

// Unicodes Aqui:
// https://www.unicode.org/charts/PDF/U2500.pdf

void u_janela(int x_inicial, int y_inicial, int x_final, int y_final) {
  int contador_horizontal, contador_vertical;
  // superior esquerdo
  gotoxy(x_inicial, y_inicial);
  printf("\u2554");
  // superior direito
  gotoxy(x_final, y_inicial);
  printf("\u2557");
  // inferior esquerdo
  gotoxy(x_inicial, y_final);
  printf("\u255A");
  // inferior direito
  gotoxy(x_final, y_final);
  printf("\u255D");

  // preencher horizontais
  for (contador_horizontal = x_inicial + 1; contador_horizontal < x_final; contador_horizontal++) {
    gotoxy(contador_horizontal, y_inicial);
    printf("\u2550");
    gotoxy(contador_horizontal, y_final);
    printf("\u2550");
  }

// preencher verticais
  for (contador_vertical = y_inicial + 1; contador_vertical < y_final; contador_vertical++) {
    gotoxy(x_inicial, contador_vertical);
    printf("\u2551");
    gotoxy(x_final, contador_vertical);
    printf("\u2551");
  }
}

void u_janela_com_titulo(int x_inicial, int y_inicial, int x_final, int y_final, char titulo[100]) {
  int contador_horizontal;
  int x_titulo;

  if (strlen(titulo) > (x_final - x_inicial)){
    printf("Titulo demasiado grande para a janela");
  }

  u_janela(x_inicial, y_inicial, x_final, y_final);
  gotoxy(x_inicial, y_inicial + 6);
  printf("\u2560");
  gotoxy(x_final, y_inicial + 6);
  printf("\u2563");
  for (contador_horizontal = x_inicial + 1; contador_horizontal < x_final; contador_horizontal++) {
    gotoxy(contador_horizontal, y_inicial + 6);
    printf("\u2550");
  }

  x_titulo = x_inicial + (((x_final - x_inicial) - strlen(titulo)) /2);
  gotoxy(x_titulo, y_inicial + 3);
  printf("%s", titulo);
}

void printfxy(int x, int y, char texto[]) {
  gotoxy(x, y);
  printf("%s", texto);
}
