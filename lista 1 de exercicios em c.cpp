#include <iostream>
#include <math.h> 

void exerc1(){
	/* Faça um programa em C que imprima o seu nome.*/
	printf("Lucrecio D. Barnabe\n");
}
void exerc2(){
	/* Faça um programa em C que imprima o produtodos valores 30 e 27.*/
	int prod=(30*20);
	
	printf("\no produtodos entre os valores 30 e 27 e %d\n", prod);
}
void exerc3(){
	/* Faça um programa em C que imprima a média aritmética entre os números 5,8, 12.*/
	int media=(5+8+12)/3;
	
	printf("\na media entre os valores 5 e 8 e 12 e %d\n", media);
}
void exerc4(){
	/*Faça um programa em Cque leia e imprima um número inteiro.*/
	int v;
	
	printf("digite um numero");
	scanf("%d", &v);
	
	printf("\no numero inteiro digitado foi: %d\n",v);
	
}
void exerc5(){
	/*Faça um programa em C que leia dois números reais e os imprima*/
	float v1,v2;
	
	printf("\ndigite dois numero reias");
	scanf("%f %f", &v1, &v2);
		
	printf("\nos numeros reais digitados foram: %.2f e %.2f\n",v1,v2);
}
void exerc6(){
	/*Faça um programa em C que leia um número inteiro 
	e imprimao seu antecessor e o seu sucessor*/
	int n,ant,s;
	
	printf("digite um numero");
	scanf("%d", &n);
	 ant=n-1;
	 s=n+1;
	
	printf("\n%d e antecessor do %d e %d e sucessor.\n",ant,n,s);
	
}
void exerc7(){
	/*Faça um programa em C que leia o nome
	   o endereço e o telefonede um clientee ao ﬁnal,imprima esses dados*/
	   
	char nome[]="";
	int fone;
	
	printf("digite o seu nome: ");
	scanf(" %s", &nome);
	
	printf("digite o numero do seu telefone: ");
	scanf("%d", &fone);
	
	printf("Nome: %s\n",nome);
	printf("telefone: %d\n",fone);
}
void exerc8(){
	/*Faça um programa em C que leia dois números
	 inteiros e imprima a subtração deles.*/
    int n1,n2,sub;
	
	printf("digite dois numeros");
	scanf("%d %d", &n1,&n2);
	
	printf("\na subtracao entre %d e %d e: %d\n",n1,n2,sub=(n1-n2));
	
}
void exerc9(){
	/* Faça um programa em C que leia um número reale imprima ¼ deste número*/
	 float vrl,u4;
	 
	 printf("\ndigite um numero: ");
	 scanf("%f",&vrl);
	 u4=vrl/4;
	 printf("\n%f equivale a um quarto de %.2f", u4,vrl);
}
void exer10(){
	/*Faça um programa em C que leia três números reais e calcule a média aritmética destes números.
	Ao ﬁnal, oprograma deve imprimir o resultado do cálculo*/
	
	 float uq,d2,t3,m;
	
	printf("\ndigite tres numeros reais: ");
	scanf("%f %f %f", &uq,&d2,&t3);
	
	m=((uq+d2+t3)/3);
	
	printf("\na media aritmetica entre %.2f %.2f %.2f e: %.2f ",uq,d2,t3,m);
	
}
void exer11(){
	/*Faça um programa em C que leia dois números reais e calcule as quatro operações
	 básicas entre estes dois números, adição,subtração,multiplicação e divisão.
	 Ao ﬁnal,oprograma deve imprimir os resultados dos cálculos*/
	 
	 float o1,o2,r1,r2,r3,r4;
	 
	 printf("\ndigite dois numeros reais: ");
	 scanf("%f %f", &o1,&o2);
	 
	 r1=(o1+o2);
	 r2=(o1-o2);
	 r3=(o1*o2);
	 r4=(o1/o2);
	 
	 printf("\nos resultados das quatro operacoes sao: soma %.2f , subtracao %.2f ,multipica %.2f ,divisao %.2f\n",r1,r2,r3,r4);
	 
}
void exer12(){
	/*Faça um programa em C que leia um número real e calcule o quadrado deste número.
	Aoﬁnal,oprograma deve imprimir o resultado do cálculo.*/
	
	int qd,qa;
	
	printf("\ndigite um numero: ");
	scanf("%d", &qd);
	
	qa=pow(qd,2);
	printf("\no quadrado de %d e : %d",qd,qa);
}
void exer13(){
	/* Faça um programa em C que leia o saldo de uma conta
	 poupança e imprima o novo saldo,considerando um reajustede 2%.*/
	 
	 float sal,reaj;
	 
	 printf("\ndigite o saldo: ");
	 scanf("%f", &sal);
	 
	 reaj=(((sal*2)/100)+sal);
	 
	 printf("\no novo salario considerando o reajuste e de: %.2f\n",reaj);
}
void exer14(){
	 /*Faça ump rograma em C que leia a base e a altura de um 
	 retângulo e imprima o perímetro(base+altura) e a área(base*altura).*/
	 float base,altura,pr,ar;
		printf("\ndigite a base e a altura de um triangulo: ");
		scanf("%f %f", &base,&altura);
		
		pr=(base+altura);
		ar=(base*altura);
		printf("\no perimetro e igual a: %.2f e a area e de: %.2f",pr,ar);
}
void exer15(){
	/*Faça um programa em C que leia o valor de um produto, o percentual do 
	desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o desconto*/
	float pv,prc,vsb,v;
	
	printf("digite o valor do produto: ");
	scanf("%f", &pv);
	
	printf("digite o valor d percntual: \n");
	scanf("%f", &prc);
	
	vsb=((pv*prc)/100);
	
	printf("\no valor de desconto e %.2f e o valor do produto subtraido do desconto e :%.2f",vsb,v=pv-vsb);
}
void exer16(){
	/* Faça um programa em C que calcule o reajuste do salário de um funcionário.Para isso, 
	o programa deverá ler o salário atual do funcionário e ler o
	 percentual de reajuste.Aoﬁnalimprimir ovalor do novo salário.*/
   
   	float salf,prc,novsal;
	
	printf("digite o salario do funcionario: ");
	scanf("%f", &salf);
	
	printf("digite o valor percntual de reajuste: \n");
	scanf("%f", &prc);
	
	novsal=(((salf*prc)/100)+salf);
	
	printf("\n o novo salario do funionario e :%.2f  $",novsal);
}
void exer17(){
	/*Faça um programa em C que calcule a conversão entre graus 
	centígrados e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base 
	na fórmula a seguir.Após calcular oprograma deve imprimir o resultado da conversão*/
	
	float c,f;
	
	printf("digite a temperatura em graus centigrados: ");
	scanf("%f", &c);
	
	f=(((9*c)+160)/5);
	
	printf("%.2f graus centigrados e igua a %.2f fahrenheit.",c,f);
}
void exer18(){
	/*Faça um programa em C que calcule a quantidade de litros de combustível
	consumidos em uma viagem,sabendo-se que o carro tem autonomia de 12km por 
	litro de combustível. O programa deverá ler o tempo decorrido 
	na viagem e a velocidade média e aplicaras fórmulas:*/
	
	float t,v,d,l;
	
	printf("\ndigite o tempo gasto pelo carro: ");
	scanf("%f", &t);
	
	printf("\ndigite velocidade do carro: ");
	scanf("%f", &v);
	
	d=t*v;
	l=d/12;
	
	printf("a distancia percorrida pelo carro e de: %.2f m",d);
	printf("\na quantidade de litros consumidos na viagem e de: %.2f l",l);
	
}
void exer19(){
	/*Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso,oprograma deve
	ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. 
	Ao ﬁnal, o programa deve imprimir o valor da prestação atrasada, o período de atraso,
	os juros que serão cobrados pelo período de atraso, o valor da prestação a crescido dos
	juros. Considere jurossimples. */
	
	float pv,taxpj,pat,jpat,prec;
	
	printf("digite o valor da prestacao: ");
	scanf("%f", &pv);
	
	printf("digite a taxa de periodo de juros: ");
	scanf("%f", &taxpj);
	
	printf("digite o periodo de atroso: ");
	scanf("%f", &pat);
	
	printf("digite o juros cobrados pelo periodo de atroso: ");
	scanf("%f", &jpat);
	
	prec=((pv+taxpj)+(pat+jpat));
	
	printf("o valor da prestacao a crescido dos juros e: %.2f", prec);
}
void exer20(){
	/*Faça um programa em C que efetue a apresentação do valor da 
	conversão em real(R$)de um valor lido em dólar(US$).
	Para isso, será necessário também ler o valor da cotação do dólar*/
	
	float dolar,real;
	
	printf("digite o valor em dolares US$ ");
	scanf("%f", &dolar);
	
	real=(dolar*5.55);
	printf("a conversao de %.2f US$   para real e %.2f R$ ",dolar,real);
}
int main(){
  exerc1(); exerc2();
  exerc3(); exerc4();
  exerc5(); exerc6();
  exerc8(); exerc9();	
  exer10(); exer11();
  exer12(); exer13();
  exer14(); exer15();
  exer16(); exer17();
  exer18(); exer19();
exer20();

}

