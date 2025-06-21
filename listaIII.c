#include <stdio.h>
#include <math.h>
	/*
void calculateVolume(float valueRadius){
	float volume = (4.0000/3.0000) * (3.1415) * (pow(valueRadius, 3));
	printf("O volume dessa esfera e de: %.2f", volume);
}*/

/*
void calculateResult( float none, float ntwo, float nthree, char option){ //scoreOne, scoreTwo, scoreThree
	float result;
	if(option == 'a' || option == 'A'){
		result = (none + ntwo + nthree) / 3;
		printf("%.2f", result );
	} else if (option == 'p' || option == 'P'){
		result = (5*none + 3*ntwo + 2*nthree) / 10;
		printf("%.2f", result );
	} else if (option == 'h' || option == 'H'){
		result = 3 / ((1/none) + (1/ntwo) + (1/nthree));
		printf("%.2f", result );
	}else{
		printf("digite um tipo de media valido \n");
	}
	
}
*/



/*
void calcular( float numeroA, float numeroB, float numeroC){
	float xone, xtwo;
	
	xone = (-numeroB + sqrt(pow(numeroB, 2) - 4 * numeroA * numeroC)) / (2 * numeroA);
	xtwo = (-numeroB - sqrt(pow(numeroB, 2) - 4 * numeroA * numeroC)) / (2 * numeroA);
	
	printf("uma das raizes vale: %.2f \n", xone);
	printf("uma das raizes vale %.2f \n", xtwo);

	
}*/

/*
void returnStatus(value){
	if(value >= 5 && value <= 7){
		printf("Categoria A");
	} else if(value >= 8 && value <= 10){
		printf("Categoria B");
	}else if(value >= 11 && value <= 13){
		printf("Categoria C");
	}else if(value >= 14 && value <= 17){
		printf("Categoria D");
	}else if (value >= 18){
		printf("Categoria E");
	} else {
		printf("idade nao permitida");
	}
	
}
*/

void calculateDuration(float hI, float mI, float hF, float mF){  //hoursI, minutesI, hoursF, minutesF

	float totalTime;
	
	float allMinutesI = (hI * 60) + mI;
	float allMinutesF = (hF * 60) + mF;
	
	
	if(allMinutesI > allMinutesF){
		allMinutesF = allMinutesF + 1440; // formato 24 passadas
	}
	
	totalTime = allMinutesF - allMinutesI;
	printf(" o tempo total de duracao do jogo foi de %.2f minutos \n", totalTime);
}



int main(){
	float hoursI, minutesI, hoursF, minutesF;
	printf("Digite a hora de inicio: \n");
	scanf("%f", &hoursI);
	
	printf("Digite o minuto de inicio: \n");
	scanf("%f", &minutesI);
	
	printf("Digite a hora de termino: \n");
	scanf("%f", &hoursF);
	
	printf("Digite o minuto de termino: \n");
	scanf("%f", &minutesF);
	
	calculateDuration(hoursI, minutesI, hoursF, minutesF);
	
	
	
	
	
	
/*
	int age;
	printf("Digite a idade: \n");
	scanf("%d", &age);
	
	returnStatus(age);
*/	
	
	
	
/*
	float a, b, c, resone, restwo;
		printf("Sabendo que a funcao de segundo grau tem o formato: a*x² + b*x + c = 0 \n");
		
		printf("Digite a: \n");
		scanf(" %f", &a);
		
		printf("Digite b: \n");
		scanf(" %f", &b);
		
		printf("Digite c: \n");
		scanf(" %f", &c);
		
		calcular(a, b, c);
		
*/	
	

	
	
/*
	float scoreOne, scoreTwo, scoreThree;
	char menuSelect;
	printf("Digite o tipo de media a ser calculada: \n A - aritmetica \n P - ponderada \n H - harmonica \n");
	scanf("%c", &menuSelect);
	printf("Digite a primeira nota: \n");
	scanf("%f", &scoreOne);
	printf("Digite a segunde nota: \n");
	scanf("%f", &scoreTwo);
	printf("Digite a terceira nota: \n");
	scanf("%f", &scoreThree);
	
	calculateResult(scoreOne, scoreTwo, scoreThree, menuSelect);
*/
	
	
	
	/*float radius;
	printf("Digite o raio de uma esfera: \n");
	scanf("%f", &radius);
	calculateVolume(radius);
	*/
	
	return 0;
	
}
