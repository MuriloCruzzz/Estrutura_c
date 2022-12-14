#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome[100][100];
    int ddd[100];
    int tel[100];
    int escolha, contUser = 0;
    char nomeAux[100];
    char email[100][100];
    int status[100];


    do{
        printf("======================== MENU ========================\n");
        printf("| 0 ........................................... SAIR |\n");
        printf("| 1 ...................................... ADICIONAR |\n");
        printf("| 2 ........................................ MOSTRAR |\n");
        printf("| 3 ...................................... PESQUISAR |\n");
        printf("| 4 ......................................... EDITAR |\n");
        printf("| 5 ........................................ DELETAR |\n");
        printf("| 6 .......................................... SOBRE |\n");
        printf("======================================================\n");
        scanf("%d", &escolha);
        system("cls");
        switch (escolha)
        {
        case 0:
            printf("Obrigado por utilizar o SisteMarques!\n");
            break;

        case 1:
            printf("===================== NOVO CADASTRO ====================\n");
            printf("Entre com as informacoes do novo usuario: \n");
            printf("NOME: ");
            scanf(" %[^\n]", nome[contUser]);

            printf("DDD: ");
            scanf("%d", &ddd[contUser]);

            printf("TELEFONE: ");
            scanf("%d", &tel[contUser]);

            printf("E-MAIL: ");
            scanf(" %[^\n]", &email[contUser]);

            contUser++;

            system("cls");
            break;

        case 2:

            for (int i = 0; i < contUser;i++)
            {
                printf("===================== USUARIO %d ======================\n", i + 1);
                printf("| NOME: %s\n", nome[i]);
                printf("| TELEFONE: (%d) %d-%.4d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                printf("| E-MAIL: %s\n", email[i]);
                printf("======================================================\n\n");
            }
            break;

        case 3:
            printf("===================== PESQUISAR CADASTRO ===================\n");
            printf("Entre com o nome a ser verificado: ");
            scanf(" %[^\n]", nomeAux);
            /**/
                for (int i = 0; i < contUser; i++)
                {
                    if(strcmp(nome[i], nomeAux) == 0 ){
                        printf("===================== USUARIO %d ======================\n", i + 1);
                        printf("| NOME: %s\n", nome[i]);
                        printf("| TELEFONE: (%d) %d-%.4d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                        printf("| E-MAIL: %s\n", email[i]);
                        printf("======================================================\n\n");
                        break;
                    }
                    else{
                        printf("Nenhum cadastro encontrado...\n");
                    }
                }


            break;

        case 4:
            printf("===================== EDITAR CADASTRO ===================\n");
            printf("Entre com o nome a ser editado: ");
            scanf(" %[^\n]", nomeAux);
                for (int i = 0; i < contUser; i++)
                {
                    if(strcmp(nome[i], nomeAux) == 0 ){
                        printf("NOME: ");
                        scanf(" %[^\n]", nome[i]);

                        printf("DDD: ");
                        scanf("%d", &ddd[i]);

                        printf("TELEFONE: ");
                        scanf("%d", &tel[i]);

                        printf("E-MAIL: ");
                        scanf(" %[^\n]", &email[i]);
                        break;
                    }
                }
            printf("Cadastro editado com sucesso...\n");

            break;

        case 5:
            printf("===================== DELETAR CADASTRO ===================\n");
            printf("Entre com o nome do cadastro a ser deletado: ");
            scanf(" %[^\n]", nomeAux);
                for (int i = 0; i < contUser; i++)
                {
                    if(strcmp(nome[i], nomeAux) == 0 ){
                        contUser--;
                        strcpy(nome[i], nome[contUser]);
                        ddd[i] = ddd[contUser];
                        tel[i] = tel[contUser];
                        strcpy(email[i], email[contUser]);
                        contUser++;
                        break;
                    }
                printf("Cadastro deletado com sucesso...\n");
                }
            contUser--;

            break;

        case 6:
            printf("======================== SOBRE =======================\n");
            printf("| Este software foi desenvolvido para fins didaticos.|\n");
            printf("| AUTOR: Marques Sousa                               |\n");
            printf("| DATA: 01/09/2022                                   |\n");
            printf("| ATUALIZADO POR: Maycon de Lima Cesar               |\n");
            printf("| NOTA DE ATUALIZACAO:                               |\n");
            printf("| Adicionado a opcao 4 - EDITAR;                     |\n");
            printf("| Adicionado a opcao 5 - DELETAR;                    |\n");
            printf("| Adicionado a informacao e-mail dentro do cadastro; |\n");
            printf("======================================================\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

    }while(escolha != 0);

    return 0;
}
