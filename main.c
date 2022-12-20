#include <stdio.h>
#include <stdlib.h>
#include "taddupencadeada.h"

int main()
{
    int op;
    Lista *l;
    Cliente a;

    do{
        do{
            printf(" --- CADASTRO DE ALUNOS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");
            printf(" 4. Cadastrar aluno\n");
            printf(" 5. Remover Aluno\n");
            printf(" 6. Nao IMPLEMENTADO\n");
            printf(" 7. Nao IMPLEMENTADO\n");
            printf(" 8. Nao IMPLEMENTADO\n");
            printf(" 9. Nao IMPLEMENTADO\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 9)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
                getch();
            }
        } while((op < 1) || (op > 9));

        switch(op)
        {
            case 1:
                l = criar();
                printf("\nLista criada!!\n\n");
                break;

            case 2:
                if(listaVazia(l) == 2)
                    printf("\nLista inexistente!!\n\n");
                else if(listaVazia(l) == 0)
                    printf("\nLista esta vazia!!\n\n");
                else
                    printf("\nLista não vazia!!\n\n");
                break;

            case 3:
                if(listaCheia(l) == 2)
                    printf("\nLista inexistente!!\n\n");
                else
                    printf("\nLista nao esta cheia!!\n\n");
                break;

            case 4:
                printf("\nDigite o nome: ");
                scanf("%s", &a.nome);
                fflush(stdin);
                printf("\nDigite o CPF: ");
                scanf("%s", &a.cpf);
                fflush(stdin);
                printf("\nDigite a senha: ");
                scanf("%f", &a.senha);
                fflush(stdin);
                a.saldo = 10.0;
                a.invest = 0.0;
                a.divida = 0.0;

                inserirInicio(l,a);

                break;

            case 5:
                //removerInicio(l);
                mostrar(a);
                printf("Aluno removido!!");
                break;

            case 6:
                printf("\n\n Recurso ainda nao foi implementado...");
                getch();
                break;

            case 7:
                printf("\n\n Recurso ainda nao foi implementado...");
                getch();
                break;

            default:
				printf("\n\n Pressione qualquer tecla para FINALIZAR...");
				getch();
        }
    } while(op != 9);

    return 0;
}
