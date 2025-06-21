%%writefile main.c




#include <stdio.h>
#include <stdlib.h>


void q1(){
      //entrada
      float combustivel, distancia, consumo;
      printf("Digite a distancia percorrida \n "); scanf("%f", &distancia);
      printf("Digite a quantida consumida de combustivel \n"); scanf("%f", &combustivel);


      //processamento




      consumo = distancia/combustivel; //calculo


      //saída
      printf("O consumo medio e: %.2f", consumo);
  }


void q2(){
    //entrada
      float tempc, tempf;
      printf("Digite a temperatura em Celsius");
      scanf("%f", &tempc);
      //processamento
      tempf = (tempc * 9 + 160) / 5; // prioridade matematicas das expressões


       //saída
      printf("Em fahreheint e %.2f", tempf);
}


  void q3(){


    //entrada
    float dolar, cotacao, real;
    printf("digite o valor da cotacao do dolar: \n");
    scanf("%f", &cotacao);
    printf("digite a quantidade de dolares disponiveis: \n");
    scanf("%f", &dolar);




    //processamento
    real = dolar * cotacao;


    //saida


    printf("voce tem %.2f reais", real);




}


  void q4(){
        //entrada


    float priceDeCusto, acrescimo, priceForVenda;
    printf("insira o preco de custo: \n ");
    scanf("%f", &priceDeCusto);
    printf("insira o percentual de acrescimo l \n ");
    scanf("%f", &acrescimo);




    // processamento
    priceForVenda = priceDeCusto + (priceDeCusto * (acrescimo / 100));


    //saida


      printf("o valor de venda sera de: %.2f reais \n ", priceForVenda );


}


  void q5(){
    //entrada


    float fabrica, consumidor;


      printf("digite o custo de fabrica : \n");
      scanf("%f", &fabrica);


      // processamento


      consumidor = (fabrica + (fabrica * 0.45));
      consumidor = (consumidor + (consumidor * 0.28));


      //saida


      printf("o custo ao consumidor final e: R$ %.2f \n", consumidor);




  }


  void q7(){
    //entrada


    float valor, resultado;
    float juros = 0.007;
    printf("digite o valor depositado \n");
    scanf("%f", &valor);
    // processamento


    resultado = (juros * valor) + valor;


    //saida
    printf("o valor a ser retirado e de: %.2f", resultado);




  }


  void q6(){
    //entrada


    float valorcompra, valorparcela;


    printf("digite o valor da compra: \n ");


    scanf("%f", &valorcompra);


    // processamento
    valorparcela = valorcompra / 5;


    //saida
    printf(" o valor de cada parcela sera de: %.2f reais", valorparcela);




  }


  void q8(){


    //entrada
    float numberone, numbertwo, result;


    // processamento
    printf("digite um numero: \n ");
    scanf("%f", &numberone);
    printf("digite um numero: \n ");
    scanf("%f", &numbertwo);


    result = numberone - numbertwo;


    //saida
    printf("%.2f", result);




  }


  void q9(){


    //entrada


    float km, litro, vm, tempo;


      //consumo = 12;






      printf("digite a distancia percorrida: \n ");
      scanf("%f", &km);
      printf("digite a o tempo gasto em horas: \n ");
      scanf("%f", &tempo);


      // processamento
      litro = km / 12;
      vm = km / tempo;


      //saida
      printf("a quantidade usada de combustivel em litros e: %f litros ", litro);
      printf(" \n a velocidade media e : %f km/h", vm );
      printf(" \n o tempo gasto foi de: %f horas", tempo);
      printf(" \n a distancia percorrida foi de: %f km", km );


}


void q10(){


    //entrada


    float valorHora, percentualDesconto, horaTrabalhada;
    float salarioBruto, desconto, salarioLiquido;


    printf("informe horas trabalhadas pelo funcionario: \n");
    scanf("%f", &horaTrabalhada);


    printf("informe o valor da hora trabalhada: \n");
    scanf("%f", &valorHora);


    printf("informe o percentual de desconto: \n");
    scanf("%f", &percentualDesconto );




    // processamento
    salarioBruto = valorHora * horaTrabalhada;
    desconto = (percentualDesconto / 100) * salarioBruto;


    salarioLiquido = salarioBruto - desconto;


    //saida


    printf(" a quantidade de horas trabalhadas sao de: %.2f horas \n", horaTrabalhada);
    printf(" o salario bruto e de : %.2f reais \n", salarioBruto);
    printf(" o desconto e de: %.2f reais \n", desconto);
    printf(" o salario liquido e de: %.2f reais \n", salarioLiquido);
}






  int main(){
  int select;
  printf("DIGITE O NUMEOR DA QUESTAO - LISTA DE INTRODUCAO \n \n Questao 1 \n Questao 2\n Questao 3\n Questao 4 \n Questao 5\n Questao 6\n Questao 7\n Questao 8\n Questao 9 \n Questao 10 \n");
    scanf("%d", &select);
    switch (select){
      case 1:
        q1();
        break;
      case 2:
        q2();
        break;
      case 3:
        q3();
        break;
      case 4:
        q4();
        break;
      case 5:
        q5();
        break;
      case 6:
        q6();
        break;
      case 7:
        q7();
        break;
      case 8:
        q8();
        break;
      case 9:
        q9();
        break;
      case 10:
        q10();
        break;
    default:
      printf("Escolha um questao existente");




    return 0;


  }


    }


