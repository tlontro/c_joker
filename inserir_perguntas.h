typedef struct Perguntas{
  char titulo[100];
  int id;
  char categoria[20];
  char resposta1[100];
  char resposta2[100];
  char resposta3[100];
  char resposta4[100];
} pergunta;

int inserir_perguntas() {
  pergunta perg[20];
  FILE *ficheiro;
  int contador = 0, opcao_correta;
  char correta, continuar;

  ficheiro = fopen("perguntas.txt", "w");
  if (!ficheiro)
  {
    printf("Erro ao ler ficheiro!");
    return 1;
  }

  while(1) {
    system("clear");
    u_janela(51, 10, 150, 37);
    gotoxy(54, 13);
    printf("Titulo da pergunta: ");
    gets(perg[contador].titulo);
    gotoxy(54, 16);
    perg[contador].id = contador;
    printf("Categoria: ");
    gets(perg[contador].categoria);
    gotoxy(54, 19);
    printf("Resposta 1: ");
    gets(perg[contador].resposta1);
    gotoxy(54, 22);
    printf("Resposta 2: ");
    gets(perg[contador].resposta2);
    gotoxy(54, 25);
    printf("Resposta 3: ");
    gets(perg[contador].resposta3);
    gotoxy(54, 28);
    printf("Resposta 4: ");
    gets(perg[contador].resposta4);
    gotoxy(54, 31);
    printf("Resposta Correta: ");
    scanf("%d", &opcao_correta);
    // gotoxy(54, 34);
    gotoxy(140, 40);
    // // printf("Esta informacao esta correta? (s/n)");
    // // correta = getchar();
    // // if (correta == 's') {
    //   gotoxy(140, 9);
      printf("A Salvar...");
      fprintf(ficheiro, "+\n%s\n%d\n:%s\n%s\n%s\n%s\n%s\n",
        perg[contador].titulo,
        perg[contador].id,
        perg[contador].categoria,
        perg[contador].resposta1,
        perg[contador].resposta2,
        perg[contador].resposta3,
        perg[contador].resposta4
      );
      fclose(ficheiro);
    // }
    // gotoxy(140, 43);
    // printf("Continuar? (s/n)");
    // continuar = getchar();
    // if (continuar == 'n') {
    //   return 0;
    // }
  }

  // strcpy(perg.titulo, "Quem e que manda nesta merda toda depois da Gabi claro?");
  // perg.id = 1;
  // strcpy(perg.categoria, "Ordem");
  // strcpy(perg.resposta1, "Claro que e o Cabanas");
  // strcpy(perg.resposta2, "O Gato");
  // strcpy(perg.resposta3, "O Cao");
  // strcpy(perg.resposta4, "Uma mosca");
  //
  // fprintf(ficheiro, "+\n%s\n%d\n:%s\n%s\n%s\n%s\n%s\n",
  //   perg.titulo, perg.id, perg.categoria, perg.resposta1, perg.resposta2, perg.resposta3, perg.resposta4
  // );

  // fputs(pergunta, "This is testing for fprintf...\n");
  // fprintf(pergunta, "This is testing for fprintf...\n");
  // fwrite(&pergunta, 1, sizeof(pergunta), ficheiro);

  // fclose(ficheiro);
  return 1;
}
