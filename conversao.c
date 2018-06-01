#include<stdio.h>
#include<stdlib.h>

int main (int argc , char *argv[]) {

int opcao;
int valor;
printf("****************************************\n");
printf("\n*****Conversor de Bases Númericas*****\n");
printf("\n****************************************\n");


printf("1: Decimal para Hexadecimal\n");
printf("\n2: Hexadecimal para Decimal\n");
printf("\nInforme a opção:");
scanf("%d", &opcao);

getchar();

if (opcao == 1)
{
    printf("\nInformar o Valor em Decimal:\n ");
    scanf("%d",&valor);
    getchar();
    printf("\n%d em Hexadecimal é: %x\n",valor, valor);
}

else if (opcao == 2)
{
printf("\nInformar o Valor em Hexadecimal:\n");
scanf("%x",&valor);
getchar();

printf("\n%x em Decimal é: %d \n",valor, valor);
}  

else if(opcao != 2){
  printf("\nSua opção é invalida.!\n");
}
else if(opcao !=1 ){
  printf("\nSua Opção é invalida!\n");

}



return 0;

}

