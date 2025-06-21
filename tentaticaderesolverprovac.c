/*
#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, n3, n4, n5;
    float produto, mediaGeometrica;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    
    printf("Digite o quarto numero: ");
    scanf("%f", &n4);
    
    printf("Digite o quinto numero: ");
    scanf("%f", &n5);
    
    produto = n1 * n2 * n3 * n4 * n5;
    mediaGeometrica = pow(produto, 1.0 / 5.0);
    
    printf("A media geometrica e: %.2f\n", mediaGeometrica);
    
    return 0;
}



*/ //Questão 3 - Lista B

#include <stdio.h>
#include <math.h>


int soma(float a, float b){
	float result = a + b;
	printf("resultado: %.2f", result);
}

int subtrair(float a, float b){
	float result;
	if(a>b){
		result = a -b;
	} else if(b>a)
		result= b - a;
	printf("resultado: %.2f", result);
}

int multiplicar(float a, float b){
	float result = a * b;
	printf("resultado: %.2f", result);
	
}

int dividir(float a, float b){
	float result = a / b;
	printf("resultado: %.2f", result);
}


int main(){
	int option;
	float numberOne, numberTwo, result;
	printf("Escolha a opcao: \n 1- Soma de 2 numeros. \n 2- Diferenca entre 2 numeros (maior pelo menor). \n 3- Produto entre 2 numeros. \n 4- Divisao entre 2 numeros (o denominador não pode ser zero). \n ");
	scanf("%d", &option);
	
	if(option == 1){
		printf("Digite o primeiro número: \n");
		scanf("%f", &numberOne);
		printf("Digite o segundo número: \n");
		scanf("%f", &numberTwo);
		soma(numberOne, numberTwo);
	} else if (option == 2){
		printf("Digite o primeiro número: \n");
		scanf("%f", &numberOne);
		printf("Digite o segundo número: \n");
		scanf("%f", &numberTwo);
		subtrair(numberOne, numberTwo);
		
	} else if (option == 3) {
		printf("Digite o primeiro número: \n");
		scanf("%f", &numberOne);
		printf("Digite o segundo número: \n");
		scanf("%f", &numberTwo);
		multiplicar(numberOne, numberTwo);
		
	}else if(option == 4)  {
		printf("Digite o primeiro número: \n");
		scanf("%f", &numberOne);
		printf("Digite o segundo número: \n");
		scanf("%f", &numberTwo);
		
		if(numberTwo == 0){
			printf("o denominador nao pode ser zero! \n");
		} else{
			dividir(numberOne, numberTwo);
		}	
	} else{
		printf("Erro! \n");
	}
	
	return 0;
}
*/


/*
//Questão 2 = Lista C
#include <stdio.h>

int main(){
	float precoAntigo, precoNovo;
	
	printf("Digite e o preco antigo: \n");
	scanf("%f", &precoAntigo);
	
	if(precoAntigo <= 50){
		precoNovo = precoAntigo * 1.05;
		printf("%.2f \n", precoNovo);
	} else if(precoAntigo >= 51 && precoAntigo<= 100){
		precoNovo = precoAntigo * 1.1;
		printf("%.2f \n", precoNovo);
	
	}else if(precoAntigo >= 101){
		precoNovo = precoAntigo * 1.15;
		printf("%.2f \n", precoNovo);
	}else{
		printf("Digite um numero valido!");
	}
	
	
	if(precoNovo <= 80){
		printf("Barato");
	}else if(precoNovo <= 120){
		printf("Normal");
	}else if(precoNovo <= 200){
		printf("Caro");
	} else {
		printf("Muito caro");
	}
		
		return 0;
}
*/

/*

//Questao 3
#include <stdio.h>

int calculateEnd( horaEf, minutoEf, segundoEf, horaDf, minutoDf, segundoDf ){
	int segTermino, minTermino, horaTermino, duracao;
	
	segTermino = segundoDf + segundoEf;
	minTermino = minutoDf + minutoEf;
	horaTermino = horaDf + horaEf;
	
	if(segTermino >= 60){
		minTermino++;
		segTermino -= 60;
	}
	
	if( minTermino>= 60){
		horaTermino++;
		minTermino -= 60;
	}
	
	
	printf("O horario de termino e: %02d horas \n %02d minutos \n %02d segundos\n", horaTermino, minTermino, segTermino);
	
	
}
*/

/*
int main(){
	
	int horaE, minutoE, segundoE, horaD, minutoD, segundoD;
	
	printf("digite a hora de entrada:");
	scanf("%d", &horaE );
	
	printf("digite o minuto de entrada:");
	scanf("%d", &minutoE );
	
	printf("digite o segundo de entrada:");
	scanf("%d", &segundoE );
	
	printf("digite a hora de duracao:");
	scanf("%d", &horaD );
	
	printf("digite o minuto de duracao:");
	scanf("%d",  &minutoD );
	
	printf("digite o segundo de duracao:");
	scanf("%d", &segundoD );
	
	calculateEnd(horaE, minutoE, segundoE, horaD, minutoD, segundoD);
	
	return 0;
}
*/

/*
//Questao 1 - Lista B
#include <stdio.h>

int main(){
	int number, algarismoP, algarismoS, algarismoT;
	
	printf("Digite um numero inteiro positivo de tres digitos: \n");
    scanf("%d", &number);
    
    algarismoP = number % 10;
    printf("%d \n", algarismoP );
    
    algarismoS = (number / 10) % 10;
    printf("%d \n", algarismoS );
    
    algarismoT = (number / 100) % 10;
    printf("%d \n", algarismoT );

	return 0;
}

#include <stdio.h>

int main() {
    int number;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &number);

    if (number == 0) {
        printf("0\n");
        return 0;
    }

    printf("Dígitos do número (da direita para a esquerda):\n");
    while (number > 0) {
        int digit = number % 10;  // pega o último dígito
        printf("%d\n", digit);
        number = number / 10;     // remove o último dígito
    }

    return 0;
}

*/

/*

// questao 1 - Lista C
#include <stdio.h>

int main() {
    int horaChegada, minutoChegada, horaPartida, minutoPartida;
    int t1, t2, minutosTotais, horasParaCalculo;
    float preco = 0;

    printf("Digite a hora de Chegada: \n");
    scanf("%d", &horaChegada);

    printf("Digite o minuto de Chegada: \n");
    scanf("%d", &minutoChegada);

    printf("Digite a hora de Partida: \n");
    scanf("%d", &horaPartida);

    printf("Digite o minuto de Partida: \n");
    scanf("%d", &minutoPartida);

    // Converte os horários para minutos totais
    t1 = horaChegada * 60 + minutoChegada;
    t2 = horaPartida * 60 + minutoPartida;

    // Calcula a diferença entre os tempos
    minutosTotais = t2 - t1;

    // Se for negativo (passou da meia-noite), soma 1440 min (24h)
    if (minutosTotais < 0) {
        minutosTotais += 1440;
    }

    // Arredondamento para cima se houver minutos restantes
    horasParaCalculo = minutosTotais / 60;
    if (minutosTotais % 60 != 0) {
        horasParaCalculo++;
    }

    printf("Minutos totais: %d\n", minutosTotais);
    printf("Horas para cálculo: %d\n", horasParaCalculo);

    // Calculando o preço conforme as faixas
    if (horasParaCalculo >= 1) {
        if (horasParaCalculo >= 2) {
            preco += 2 * 1.0;
        } else {
            preco += horasParaCalculo * 1.0;
        }
    }

    if (horasParaCalculo > 2) {
        if (horasParaCalculo - 2 >= 2) {
            preco += 2 * 1.4;
        } else {
            preco += (horasParaCalculo - 2) * 1.4;
        }
    }

    if (horasParaCalculo > 4) {
        preco += (horasParaCalculo - 4) * 2.0;
    }

    printf("Preço a pagar: R$ %.2f\n", preco);

    return 0;
}
*/
