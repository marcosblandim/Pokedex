#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pokedex_ascii.h"
#include "Funcoes.h"
#include <locale.h>
int main()
{
    struct poderes
    {
        char poder[];
    }

    struct cadastrar
    {
        int numero;
        char nome[15];
        char condicao;
    }
    cadastrar pokemon[151];

    int printa_menu_invalido();
    int cadastro();
    char escolha, quebra_linha;
    //Permitir acentos.
    setlocale(LC_ALL, "Portuguese");

    printf("------------------------------------POKEDEX-------------------------------------                                      MENU                                    \n\n   Olá treinador e seja bem-vindo a Pokedex!\n\n   Aqui você pode cadastrar seus novos Pokémons, consultar aquele já cadastrado e alterar ou excluir caso tenha acontecido algum engano. E tudo isso feito de\nforma simples e rápida, para que você se preocupe apenas em tornar o melhor\nmestre Pokémon!\n\nDigite:\n\n(1) CADASTRAR\n\n(2) CONSULTAR\n\n(3) ALTERAR\n\n(4) EXCLUIR\n\n(5) FECHAR\n\n--> ");
    scanf("%c%c",&escolha,&quebra_linha);
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

