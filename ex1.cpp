#include <stdio.h>
#include <locale.h>
main(){

	int identificacao;
	float n1,n2,n3,n4;
	float media;
		
	printf("insira seu numero de identificação: ");
	scanf("%d", &identificacao);
	
	printf("insira sua nota: ");
	scanf("%f",&n1);
	printf("insira sua nota: ");
	scanf("%f",&n2);
	printf("insira sua nota: ");
	scanf("%f",&n3);
	printf("insira sua nota: ");
	scanf("%f",&n4);
	
	media= (n1+n2+n3+n4)/4;
	
	if (media>=9 and media ==10){
		printf("aprovado")
	;}if (media>=7.5 and media ==8.9){
		printf("aprovado")
	;}if	(media>=6 and media ==7.4){
		printf("aprovado")
	;}if (media>=4 and media == 5.9){
		printf("reprovado")
	;}if (media >=0 and media == 3.9){
		printf("reprovado")
	;}
	
}
