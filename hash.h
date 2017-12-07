#ifndef HASH_H
#define HASH_H
#define SIZE_HASH 251

typedef struct{
  char* palavra;
  int frequencia;
  Palavra* prox;
}Palavra;

typedef Palavra* vet[SIZE_HASH] Hash;

Hash Iniciar();
int hash(char* chave);
Palavra* Acessar(Hash tabela, char* palavra);
void Adicionar(char* palavra);


#endif /* HASH_H */
