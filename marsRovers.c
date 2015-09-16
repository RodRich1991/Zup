#include <stdio.h>
#include <string.h>

int main()
{
    int p1,p2,x1,x2,y1,y2,rv,c;
    char d1,d2,mov1[50],mov2[50];

    printf("Input the plateu's size :\n"); 
    scanf("%d %d",&p1,&p2); //Scan para pegar o tamanho da area que os robos poderão movimentar
    printf("Input the  first rover's position: \n");
    scanf("%d %d %c",&x1,&y1,&d1); //Posição atual do primeiro Robô
    printf("Input the  first rover's move: \n");
    scanf("%s",&mov1); //Conjunto de comandos de movimentos para o primeiro Robô
    printf("Input the  second rover's position: \n");
    scanf("%d %d %c",&x2,&y2,&d2); //Posição atual do segundo Robô
    printf("Input the  second rover's move: \n");
    scanf("%s",&mov2); //Conjunto de comandos de movimentos para o segundo Robô


    for(c=0; c<=strlen(mov1); c++){ //Executa um laço para checar cada letra do conjunto de comandos (1º robô)
            if(mov1[c]=='L' || mov1[c]=='l'){ //Se a letra atual for 'L' vai executar o movimento de acordo com a direção atual
                if(d1=='N' || d1=='n')d1='W';
                else if(d1=='E' || d1=='e')d1='N';
                else if(d1=='S' || d1=='s')d1='E';
                else if(d1=='W' || d1=='w')d1='S';
            }
            else if(mov1[c]=='R' || mov1[c]=='r'){ //Se a letra atual for 'L' vai executar o movimento de acordo com a direção atual
                if(d1=='N' || d1=='n')d1='E';
                else if(d1=='E' || d1=='e')d1='S';
                else if(d1=='S' || d1=='s')d1='W';
                else if(d1=='W' || d1=='w')d1='N';
            }
            else if(mov1[c]=='M' || mov1[c]=='m'){ //Se a letra atual for 'M' vai executar o movimento de acordo com a posição atual
                if(d1=='N' || d1=='n')y1=y1+1;
                else if(d1=='E' || d1=='e')x1=x1+1;
                else if(d1=='S' || d1=='s')y1=y1-1;
                else if(d1=='W' || d1=='w')x1=x1-1;
            }
    }

//COMO PEDIDO NO EXEMPLO, O SEGUNDO ROBÔ SÓ VAI MOVIMENTAR APÓS O PRIMEIRO TERMINAR SEU MOVIMENTO

    for(c=0; c<=strlen(mov2); c++){ //Executa um laço para checar cada letra do conjunto de comandos (2º robô)
            if(mov2[c]=='L' || mov2[c]=='l'){ //Se a letra atual for 'L' vai executar o movimento de acordo com a direção atual
                if(d2=='N' || d2=='n')d2='W';
                else if(d2=='E' || d2=='e')d2='N';
                else if(d2=='S' || d2=='s')d2='E';
                else if(d2=='W' || d2=='w')d2='S';
            }
            else if(mov2[c]=='R' || mov2[c]=='r'){ //Se a letra atual for 'L' vai executar o movimento de acordo com a direção atual
                if(d2=='N' || d2=='n')d2='E';
                else if(d2=='E' || d2=='e')d2='S';
                else if(d2=='S' || d2=='s')d2='W';
                else if(d2=='W' || d2=='w')d2='N';
            }
            else if(mov2[c]=='M' || mov2[c]=='m'){ //Se a letra atual for 'L' vai executar o movimento de acordo com a posição atual
                if(d2=='N' || d2=='n')y2=y2+1;
                else if(d2=='E' || d2=='e')x2=x2+1;
                else if(d2=='S' || d2=='s')y2=y2-1;
                else if(d2=='W' || d2=='w')x2=x2-1;
            }
    }

   if(x1>p1 || x2>p1 || y1>p2 || y2>p2 || x1<0 || x2<0 || y1<0 || y2<0){ //Caso o Robô termine fora da área estabelicida retorna a mensagem abaixo
        printf("\nYou have made a mistake. According to the Plateu's size, you couldn't make this move.\n");
        return 0;
    }
    else { //Se ocorreu tudo certo vai retornar a posição dos 2 robôs
        printf("\n1st Rover's position: %d %d %c",x1,y1,d1);
        printf("\n2nd Rover's position: %d %d %c\n",x2,y2,d2);
    }
    return 0;
}
