//Faça uma função que recebe a data de nascimento de uma pessoa em apresente sua idade expressa em dias, meses e anos.
#include <stdio.h>

  int diasMes(int mes){
 int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diasMes[mes-1];
  }
  void calcularIdade(int dia, int mes, int ano, int diaAtual, int mesAtual, int anoAtual){  
    int totalAnos, totalMes, totalDias;
    
    if(diaAtual >= dia){
      totalDias = diaAtual - dia;
    }else{  
      totalDias = diaAtual + diasMes(mes) - dia;
      mesAtual--;
  }
    if(mesAtual >= mes){  
      totalMes = mesAtual - mes;
    }else{  
      totalMes = mesAtual + 12 - mes;
      anoAtual--;
    }  
    totalAnos = anoAtual - ano;
    printf("Sua idade é %d anos, %d meses e %d dias.", totalAnos, totalMes, totalDias);
  }
main(){  
  
  int dia, mes, ano;
  
  printf("Digite sua data de nascimento: ");
  scanf("%d %d %d", &dia, &mes, &ano);

  printf("Digite sua data atual: ");
  scanf( "%d %d %d", &dia, &mes, &ano);

  
  printf("Sua idade é: %d anos, %d meses e %d dias", ano, mes, dia);
}  