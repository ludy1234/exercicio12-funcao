#include <stdio.h>

int imprimirOpcao(){
  int opcao;

  printf("Escolha uma opcao de pagamento:\n");

  printf("1) A vista com 10 porcento de desconto\n");

  printf("2) Em duas vezes (preco da etiqueta)\n");

  printf("3) De 3 ate 10 vezes com 3 porcento de juros ao mes (somente para compras acima de R$ 100,00)\n");

  scanf("%d", &opcao);
  return opcao;
}

float calcularValor(float valor){  
  float valorFinal; 
  switch(imprimirOpcao()){
    case 1:
      printf("Voce escolheu a opcao 1\n");
      printf("O valor final eh: %.2f\n", valor * 0.9);
      break;
    case 2:
      printf("Voce escolheu a opcao 2\n");
      printf("O valor final eh: %.2f\n", valor);
      break;
    case 3:
      printf("Voce escolheu a opcao 3\n");
      if(valor > 100){  
        int parcelas;
        printf("Em quantas vezes voce quer parcelar?\n");
        scanf("%d", &parcelas); 
        if(parcelas >= 3 && parcelas <= 10){
          printf("O valor final eh: %.2f\n", valor * 1.03);
          printf("Voce pagara %d vezes de %.2f\n", parcelas, (valor * 1.03) / parcelas);

          break;
        }
      }
  }

  return 0;
}  

int main(){  

  float valor;

  printf("Digite o valor total da compra: ");
  scanf("%f", &valor);
  calcularValor(valor);

  return 0;
}