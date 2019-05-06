void menu_principal() {
  int opcao;

  do {
    system("clear");
    u_janela_com_titulo(51, 10, 150, 33, "BENVINDO AO JOKER");
    printfxy(92, 20, "1 - JOGAR");
    printfxy(92, 23, "2 - INSERIR PERGUNTAS");
    printfxy(92, 26, "3 - LISTAR PERGUNTAS");
    printfxy(92, 29, "0 - SAIR");
    gotoxy(195, 45);
    printf("[OPCAO]");
    gotoxy(198, 46);
    scanf("%d", &opcao);
    if (opcao != 0)
      printfxy(1, 1, "OPCAO ERRADA, POR FAVOR SELECIONE UMA OPCAO CORRETA!");
  } while(opcao != 0);

}
