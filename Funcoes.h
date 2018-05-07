#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<conio.h>
#include "Funcoes.h"

//Digito diferente das opções.
int printa_menu_invalido()
{
    system("cls");
    char escolha, quebra_linha;
    //Permitir acentos.
    setlocale(LC_ALL, "Portuguese");

    printf("------------------------------------POKEDEX-------------------------------------                                      MENU                                    \n\n  Olá, seja bem-vindo a Pokedex.\n\n  Aqui você pode cadastrar seus novos Pokémons, consultar aqueles ja cadastrados e alterar ou excluir caso algum engano aconteça. Tudo feito de forma rápida e \nsimples, para que você se preocupe apenas em tornar o melhor mestre Pokémon!\n\nDigite:\n\n(1) CADASTRAR\n\n(2) CONSULTAR\n\n(3) ALTERAR\n\n(4) EXCLUIR\n\n(5) FECHAR\n\nDígito invalido, por favor digite outro.\n\n--> ");
    scanf("%c%c", &escolha, &quebra_linha);
    //Garante que apenas um caracter eh valido.
    if(quebra_linha == '\n')
    {
        switch (escolha)
        {
            case '1':
            {
                cadastro();
                break;
            }
            case '2':
            {
                printf("2");
                break;
            }
            case '3':
            {
                printf("3");
                break;
            }
            case '4':
            {
                printf("4");
                break;
            }
            case '5':
            {
                return 0;
            }
            default:
            {
                printa_menu_invalido();
            }
        }
    }
    else
    {
        //Printar invalido quando é digitado mais de um digito.
        for(int i = 0; ; i++)
        {
            char ler;
            scanf("%c", &ler);
            if(ler == '\n')
            {
                break;
            }
        }
        printa_menu_invalido();
    }
}

int cadastro()
{
    system("cls");
    printf("--------------------------------------------------------------------------------                                   CADASTRO                                  \n\n");

}

#endif // FUNCOES_H_INCLUDED
