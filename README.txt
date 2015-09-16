# Zup
Testes e aplicações desenvolvidas para Zup

Mars Rovers Project

=============================================================================================================================

O programa é um programa simples pra simular 2 robôs, você passa as coordenadas atuais, e a linha de comandos que os robôs
devem executar. Após isso os robôs vão executar os movimentos. E no final o programa te passa as novas coordenadas onde os
robôs estão.

A área em que os robôs vão poder se movimentar é recebida pela usuário com 2 números inteiros representando os pontos 'X' e 'Y'.
*Exemplo 1:
  5 6 (Forma um retângulo de 5 de comprimento e 6 de altura)
*Exemplo 2: 
  5 5 (Forma um quadrado de 5 de comprimento e 5 de altura)
  
A localização inicial dos robôs e recebida também pelo usuário, com 2 números inteiros representando os pontos 'X' e 'Y', e 
uma letra representando a direção em que o robô está "olhando". Essas letras são representadas de acordo com o Pontos Cardinais 
e de acordo com os nomes em inglês. As direções são represendas pelas seguintes letras:

  *N = North (Norte)
  *E = East (Leste)
  *S = South (Sul)
  *W = Weastern (Oeste)
  
Pra facilitar a NASA colocou esses robôs aceitando apenas 3 comandos, representados por 1 letra:

  *L = O Robô vira apartir da direção atual pra esquerda.
  *R = O Robô vira apartir da direção atual pra direita.
  *M = O Robô move um ponto pra direção atual em que está "olhando".
  
=============================================================================================================================

Pra utilizar o programa é simples basta preencher com os valores na seguinte ordem:

  1- Input the plateu's size :  (Coloque o tamanho da área em que os robôs vão movimentar)
    Ex: "5 5" (Colque o primeiro numero que representa 'X' seguido por um espaço após o número que reprenta 'Y'. Sem as aspas)
  2- Input the  first rover's position:  (Indique a posição inicial do primeiro robô)
    Ex: "1 2 N"  (Primeiro o número que reprenseta 'X' seguido por um espaço, depois o número que representa 'Y', mais um espaço, após a letra que representa a 'direção'. Sem aspas).
  3- Input the  first rover's move:  (Digite a sequência de comandos desejada para o primeiro robô)
    Ex: "LMLMLMLMM" (Basta digitar as letras que representa os comandos disponiveis seguidas. *Obs: Apenas as letras "L,R,M" são comandos válidos. Sem aspas).
  4- Input the  second rover's position: (Indique a posição inicial do segundo robô)
    Ex: "3 3 E"  (Primeiro o número que reprenseta 'X' seguido por um espaço, depois o número que representa 'Y', mais um espaço, após a letra que representa a 'direção'. Sem aspas).
  5- Input the  second rover's move:  (Digite a sequência de comandos desejada para o segundo robô)
    Ex: "MMRMMRMRRM" (Basta digitar as letras que representa os comandos disponiveis seguidas. *Obs: Apenas as letras "L,R,M" são comandos válidos. Sem aspas).

=============================================================================================================================
Após digitar todos os valores, o programa irá executar os movimentos do primeiro e segundo robôs respectivamente.
Caso o robô mova pra uma área fora da área delimitada o programa irá informar que o movimento não foi correto.
