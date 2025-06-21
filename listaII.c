#include <stdio.h>
#include <math.h>

// Códigos das questões

	void q1(){
		float a, b, c, d;
		float res = a + b + c + d;
		printf("digite o primeiro numero: \n");
		scanf("%f", &a);
		printf("digite o segundo numero: \n");
		scanf("%f", &b);
		printf("digite o terceiro numero: \n");
		scanf("%f", &c);
		printf("digite o quarto numero: \n");
		scanf("%f", &d);
		printf("o resultado da soma e: %.2f", res);
		
	}
		
	void q2(){
		int a, b, c;
	    float media;
	
	    printf("digite a primeira nota: \n ");
	    scanf("%d", &a);
	    printf("digite a segunda nota: \n");
	    scanf("%d", &b);
	    printf("digite a terceira nota: \n");
	    scanf("%d", &c);
	
	    media = (a + b + c) / 3;
	    printf("a media das notas eh: %.2f \n", media);
	
	}
	
	
	void q3(){
		float a, b, c;
	    float mediag;
	
	    printf("Digite o primeiro valor: \n");
	    scanf("%f", &a);
	
	    printf("digite o segundo valor: \n");
	    scanf("%f", &b);
	    printf("digite o terceiro valor: \n");
	    scanf("%f", &c);
		mediag = cbrt(a * b * c);
		printf("a media geometrica e: %.2f \n", mediag);	

	}
	
	
	void q4(){
		float a, b, c;
	    float mediap;
	
	    printf("digite o primeiro valor: \n");
	    scanf("%f", &a);
	
	    printf("digite o segundo valor: \n");
	    scanf("%f", &b);
	    printf("digite o terceiro valor: \n");
	    scanf("%f", &c);
		mediap = (a + b*2 + c*3) / 5;
		printf("a media ponderada e: %.2f \n", mediap);	
	
	}
	
	
	void q5(){
		float a, b, media;
	    printf("aigite a nota do bimestre 1: \n");
	    scanf("%f", &a);
	    printf("digite a nota do bimestre 2(peso 3): \n");
	    scanf("%f", &b);
		    media = (a * 2 + b * 3) / 5;

	    printf("a media do semestre e: %.2f \n", media);	
	}
	
	
	void q6(){
	float marido, esposa, totalGasto, porcentagemMarido, porcentagemEsposa, valorDevido, saldoMarido, saldoEsposa;

    printf("digite a despesas pagas pelo marido: ");
    scanf("%f", &marido);

    printf("digite as despesas pagas pela esposa: ");
    scanf("%f", &esposa);

    totalGasto = marido + esposa;
    porcentagemMarido = (marido / totalGasto) * 100;
    porcentagemEsposa = (esposa / totalGasto) * 100;
    valorDevido = totalGasto / 2;
    saldoMarido = marido - valorDevido;
    saldoEsposa = esposa - valorDevido;
   
    printf(" a despesa do marido e: %.2f \n", marido);
    printf("a despesa da esposa e: %.2f \n", esposa);
    printf("o total a pagar do casal e: %.2f \n", totalGasto);
    printf("o percentual pago pelo marido e: %.2f \n", porcentagemMarido);
    printf("o percentual pago pela esposa e: %.2f \n", porcentagemEsposa);
    printf("o valor devido para cada um e: %.2f \n", valorDevido);
    printf("saldo do marido: %.2f\n", saldoMarido);
    printf("saldo da esposa: %.2f\n", saldoEsposa);

    if(saldoMarido > 0) {
        printf("a esposa que deve pagar %.2f  ao marido. \n", saldoMarido);
    } else if(saldoEsposa > 0) {
        printf("o marido que deve pagar %.2f para a esposa.\n", saldoEsposa);
    } else{
        printf("eles nao devem nada um ao outro \n");
    }

}
	
	void q7(){
    float assinatura = 49.90;
    float pacotedados = 20.00;      
    float ligacaoInternacional = 1.50;
    float streamingA = 15.00;
    float streamingB = 25.00;
    float streamingC = 30.00;
    int gbAadicionais, minutos, pA, pB, pC;


    printf("quantos pacotes de GB de adicionais? \n");
    scanf("%d", &gbAadicionais);
    printf("quantos minutos de ligacoes internacionais: \n ");
    scanf("%d", &minutos);
    printf("quantas assinaturas para a Plataforma A ?  \n ");
    scanf("%d", &pA);
    printf("quantas assinaturas para a Plataforma B ? \n ");
    scanf("%d", &pB);
    printf("quantas assinaturas para a Plataforma C ? \n ");
    scanf("%d", &pC);

    float custoDados = (gbAadicionais / 5) * pacotedados;
    float custoLigacoes = minutos * ligacaoInternacional;
    float custoStreaming = (pA * streamingA) + (pB * streamingB) + (pC * streamingC);
    float total = assinatura + custoDados + custoLigacoes + custoStreaming;

    printf("valor de base: R$ %.2f \n", assinatura);
    printf("valor gasto com dados adicionais: R$ %.2f \n", custoDados);
    printf("valor gasto para ligacoes internacionais: R$ %.2f \n", custoLigacoes);
    printf("valor gasto com streaming: R$ %.2f \n", custoStreaming);
    printf("total da conta: R$ %.2f \n", total);

}

		
		
		
	/*	float assinaturaBasica, pacoteAdicionalDeDados, ligacoesInternacionais, servicosDeStreaming;
		assinaturaBasica  = 49.90;
		printf("")*/
	
	
	
	
	

int main(){
	int select;
	printf("DIGITE O NUMERO DA QUESTAO - LISTA DE INTRODUCAO \n \n Questao 1 \n Questao 2\n Questao 3\n Questao 4 \n Questao 5\n Questao 6\n Questao 7\n");
    scanf(" %d", &select);
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
		default:
			printf("Escolha um questao existente");
		return 0;	
	}
}




