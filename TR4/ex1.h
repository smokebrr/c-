   printf("qual combustivel voce deseja?\n a - alcool\n g - gasolina: ");
scanf(" %c", &tipo_combustivel);

printf("digite quantos litros voce vai querer: ");
scanf("%f", &litros_qtd);

if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {