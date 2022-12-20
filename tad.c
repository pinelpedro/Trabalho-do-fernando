#include <stdio.h>
#include <stdlib.h>
#include "taddupencadeada.h"

typedef struct no {
  Cliente valor;
  struct no * prox;
}No;

typedef struct lista {
  No *inicio;
}Lista;

Lista *criar() {
  Lista *l = (Lista *) malloc(sizeof(Lista));
  l -> inicio = NULL;
  return l;
}

/*void limpar(Lista * l) {
  while (listaVazia(l) != 0) removerInicio(l);
  free(l);
  l = NULL;
}
*/

/*int tamanho(Lista * l) {
  if (l == NULL) return -1;
  No * no = l -> inicio;
  int cont = 0;
  while (no != NULL) {
    cont++;
    no = no -> prox;
  }
  return cont;
}
*/

void mostrar(Cliente x) {
    printf("Nome: %s\n", x.nome);
    printf("CPF: %s\n", x.cpf);
    printf("Saldo atual: R$%2.f\n", x.saldo);
    if(x.divida > 0.0)
        printf("Voce possui uma divida de: R$%2.f\n", x.divida);
    else
        printf("Voce nao possui dividas.\n");

    if(x.invest > 0.0){
        printf("Voce possui R$%2.f investidos\n", x.invest);
        printf("Seu lucro mensal é de: R$2.f\n", x.invest+1.0);
    }
    else
        printf("Voce nao possui valor investido.\n");
}

int listaVazia(Lista * l) {
  if (l == NULL) return 2;
  if (l -> inicio == NULL) return 0;
  else return 1;
}
int listaCheia(Lista * l) {
  if (l == NULL) return 2;
  return 1;
}

int inserirInicio(Lista * l, Cliente it) {
  if (l == NULL) return 2;
  No * no = (No * ) malloc(sizeof(No));
  no -> valor = it;
  no -> prox = l -> inicio;
  l -> inicio = no;
  return 0;
}

/*int inserirFim(Lista * l, Aluno it) {
  if (l == NULL) return 2;
  if (listaVazia(l) == 0) return inserirInicio(l, it);
  No * noLista = l -> inicio;
  while (noLista -> prox != NULL) noLista = noLista -> prox;
  No * no = (No * ) malloc(sizeof(No));
  no -> valor = it;
  no -> prox = NULL;
  no -> ant = noLista;
  noLista -> prox = no;
  return 0;
}

int removerInicio(Lista * l) {
  if (l == NULL) return 2;
  if (listaVazia(l) == 0) return 1;
  No * noLista = l -> inicio;
  l -> inicio = noLista -> prox;
  if (l -> inicio != NULL) l -> inicio -> ant = NULL;
  free(noLista);
  return 0;
}

int removerFim(Lista * l) {
  if (l != NULL) return 2;
  if (listaVazia(l) == 0) return 1;
  No * noLista = l -> inicio;
  while (noLista -> prox != NULL) noLista = noLista -> prox;
  if (noLista -> ant == NULL) l -> inicio = NULL;
  else noLista -> ant -> prox = NULL;
  free(noLista);
  return 0;
}
*/
