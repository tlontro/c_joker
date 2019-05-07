void print_intro(){
  FILE *fp;
  char ch, text[1000];

  fp = fopen("intro.txt", "r");
  if (fp == NULL){
    printf("Error when opening file!");
  }

  system("clear");
  while((ch = fgetc(fp)) != EOF)
    printf("%c", ch);
  fclose(fp);
  getchar();
}
