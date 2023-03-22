#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int main()
{
//MENU
int jogo, retorno;

printf("     ========== BEM VINDO ========== \n\n");
printf("- Seja bem vindo ao desafio de programacao - \n\n");

printf("\t Escolha seu minijogo a seguir: \n\n");
printf("\t --> |1| PERGUNTAS E RESPOSTAS \n");
printf("\t --> |2| COBRA NA CAIXA \n");
printf("\t --> |3| GOUSMAS WAR \n");
printf("\t --> |4| SAIR DO JOGO \n");
printf("\t --> ");
scanf("%d", &jogo);
system("cls");

switch(jogo)
{
case 1:
do
{

int resp1, resp2, resp3, resp4, resp5;//RESPOSTAS

printf("\t\n ==========PERGUNTAS E RESPOSTAS==========\n");
printf("\n --> -|O que eh sociofobia?|-");//PRIMEIRA PERGUNTA
printf("\n1 - Medo de ter socios");
printf("\n2 - De tomar um soco");
printf("\n3 - Ou da sociedade\n");
printf("\nDigite a resposta: ");
scanf("%d", &resp1);

if(resp1 == 3)
{
printf("\t\n --Resposta Correta!-- \n");

}

else if(resp1 == 1 || resp1 == 2)
{
printf("\t\n --Resposta Errada!-- \n");
printf("\t\n A resposta certa era a 3\n");
}

else
{
printf("\t\n --Resposta Invalida-- \n");
}

    printf("\n-|Quem inventou o primeiro computador?|-");//SEGUNDA PERGUNTA
    printf("\n1 - Alan Turing");
    printf("\n2 - James Watt");
    printf("\n3 - Charles Babbage\n");
    printf("\nDigite a reposta:\n ");
scanf("%d", &resp2);

if(resp2 == 3)
{
printf("\t\n --Resposta Correta!-- \n");
} 

else if(resp2 == 1 || resp2 == 2)
{
printf("\t\n --Resposta Errada!-- \n");
printf("\t\n A resposta certa era a 3\n");
} 

else
{
printf("\t\n --Resposta Invalida-- \n");
}

printf("\n-|Quem foi a unica pessoa na historia a receber o Premio Nobel em areas cientificas diferentes?|-");//TERCEIRA PERGUNTA
    printf("\n1 - Marie Curie");
printf("\n2 - Albert Einstein");
    printf("\n3 - Stephen Hawking\n");
    printf("\nDigite a reposta: ");
scanf("%d", &resp3);

if(resp3 == 1)
{
printf("\t\n --Resposta Correta!-- \n");
}

else if(resp3 == 2 || resp3 == 3)
{
printf("\t\n --Resposta Errada!-- \n");
printf("\t\n A resposta certa era a 1\n");
}

else
{
printf("\t\n --Resposta Invalida-- \n"); 
}

printf("\n-|Qual foi a celebre invencao feita por Robert Kahn e Vint Cerf?|-");//QUARTA PERGUNTA
    printf("\n1 - Televisao");
    printf("\n2 - Internet");
    printf("\n3 - Radio-gravador\n");
    printf("\nDigite a reposta: ");
scanf("%d", &resp4);

if(resp4 == 2)
{
printf("\t\n --Resposta Correta!-- \n"); 
}

else if(resp4 == 1 || resp4 == 3)
{
printf("\t\n --Resposta Errada!-- \n");
printf("\t\n A resposta certa era a 2\n");
}

else
{
printf("\t\n --Resposta Invalida-- \n");
}

printf("\n-|Quem eh o criador de Star Wars?|-");//QUINTA PERGUNTA
    printf("\n1 - George Lucas");
    printf("\n2 - Steven Spielberg");
    printf("\n3 - Woody Allen\n");
    printf("\nDigite a resposta: ");
scanf("%d", &resp5);

if(resp5 == 1)
{
printf("\t\n --Resposta Correta!-- \n");
}

else if(resp5 == 2 || resp5 == 3)
{
printf("\t\n --Resposta Errada!-- \n");
printf("\t\n A resposta certa era a 1\n");
}

else
{
printf("\t\n --Resposta Invalida-- \n"); 
}

system("cls");
printf("\n\t=========== FIM DE JOGO ========== \n\n");
printf("___Digite____\n\n");
printf("\n|1| para --> retornar ao menu\n\n|2| para--> Jogar novamente\n\n");
    scanf("%d", &retorno);
    
    
    if(retorno == 1)
{
return main();
}
    
    
    } while (retorno != 1);
    break;

}
    
}

