#ifndef TADDUPENCADEADA_H_INCLUDED
#define TADDUPENCADEADA_H_INCLUDED

typedef struct cliente {
  char cpf[12];
  char senha[30];
  char nome[50];
  float saldo;
  float invest;
  float divida;
}Cliente;

typedef struct lista Lista;

Lista *criar();
void limpar(Lista * l);
int inserirInicio(Lista * l, struct cliente it);
int inserirFim(Lista * l, struct aluno it);
int inserirPosicao(Lista * l, struct aluno it, int pos);
int removerInicio(Lista * l);
int removerFim(Lista * l);
int removerPosicao(Lista * l, int pos);
int removerItem(Lista * l, int it);
int buscarItemChave(Lista * l, int chave, struct aluno * retorno);
int buscarPosicao(Lista * l, int posicao, int * retorno);
int listaVazia(Lista * l);
int listaCheia(Lista * l);
int tamanho(Lista * l);
void mostrar(Cliente x);


#endif // TADDUPENCADEADA_H_INCLUDED
