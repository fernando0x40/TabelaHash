#include "hash.h"

Hash Iniciar(){
  Hash tabela = (Hash) malloc(sizeof(Hash));
  int i;
  for(i=0 ; i < SIZE_HASH ; i++)
    tabela[i] = NULL;
  return tabela;
}

int hash(char* chave){
  return chave%SIZE_HASH;
}

Palavra* Acessar(Hash tabela, char* palavra){
  int* i = hash(palavra);
  Palavra* aux = tabela[i];  
  Palavra* aux2 = aux->prox;
  while(aux2 != NULL){
    if(strcmp(aux2->palavra,palavra)){

      return aux2;
    }else{
      aux = aux2;
      aux2 = aux2->prox;
  }}
  aux2 = (Palavra*) malloc(sizeof(Palavra));
  aux2->palavra = (char*) malloc(strlen(palavra)+1);
  strcpy(aux2->palavra , palavra);
  aux2->frequencia = 1;
  aux2->prox = NULL;
  return aux2;
  }

void Adicionar(char* palavra);
