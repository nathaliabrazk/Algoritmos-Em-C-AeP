//algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
//quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
//construtor tem a quantidade total de fios em metros a serem utilizados na instalação
//elétrica da obra e que cada rolo de fio tem 50 metros.
#include<stdio.h>
#define METROSROLO 80
int main(){
//declaracao de variaveis
int metros, rolos, metrosAvulsos;
    //definicao de valores
	printf("Digite o valor A: ");
	scanf("%d", &metros);
	rolos = metros / METROSROLO;
	metrosAvulsos = metros % METROSROLO;
    //impressao de resultados
	printf("Rolos: %d\n", rolos);
	printf("Metros avulsos: %d\n", metrosAvulsos);
	printf("Voce precisa de %d rolos e %d metros avulsos\n", rolos, metrosAvulsos);	

    return 0;
}