#include <stdio.h>

int main(void) {
  int cliente, resp=1;
  float produto, total, desconto;

  while (resp==1){
  printf("\n valor do produto: ");
  scanf("%f", &produto);

  printf("\n qual tipo de cliente? 1(sem desconto) 2(5% de desconto) ou 3(10% desconto)? ");
  scanf("%d", &cliente);

  
  switch (cliente){
    case 1:
    printf("\n nao ha desconto! \n");
    total =+ produto;
    break;
    case 2:
    printf("ha deconto \n");
    desconto = produto * 0.05;
    produto -= desconto;
    printf("valor com desconto: %.2f \n", produto);
    total += produto;
    break;
    case 3:
    printf("ha deconto \n");
    desconto = produto * 0.10;
    produto -= desconto;
    printf("valor com desconto: %.2f \n", produto);
    total += produto;
    break;
    }
    printf("\n ha mais cliente? 0 = nao 1 = sim ");
    scanf("%d", &resp);
    }
  
  printf("valor total do dia: %.2f", total);
  return 0;
}
