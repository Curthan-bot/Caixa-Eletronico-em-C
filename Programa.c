// Desenvolvido por João Vitor Zanetti Silva
// UFES - Campus Alegre
// SI 2019/02
// Sob a licença GNU

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variaveis Globais
int n200, n100, n50, n20, n10, n5, n2;
int caixa, caixamais;

// Função para calcular as notas
int notas (int saque){
	
	int valor;
	valor = saque;
	
	// Notas de 200 Reais
	while(saque >= 200){
		
		if (saque % 200 == 1){
			saque = saque - 201;
			n100 = 1;
			n50 = 1;
			n20 = 2;
			n5 = 1;
			n2 = 3;
		}
		else if (saque % 200 == 3){
			saque = saque - 203;
			n100 = 1;
			n50 = 1;
			n20 = 2;
			n5 = 1;
			n2 = 4;
		}
		else if (saque % 200 == 7){
			saque = saque - 207;
			n200 = 1;
			n5 = 1;
			n2 = 1;
		}
		else if (saque % 200 == 6){
			saque = saque - 206;
			n200 = 1;
			n2 = 3;
		}
		else if (saque % 200 == 8){
			saque = saque - 208;
			n200 = 1;
			n2 = 4;
		}
		else{
		saque = saque - 200;
		n200++;
		}
	}
	
	// Notas de 100 Reais
	while (saque >=100 && saque < 200){
		
		if (saque % 100 == 1){
			saque = saque - 111;
			n100 = 1;
			n5 = 1;
			n2 = 3;
		}
		else if (saque % 100 == 3){
			saque = saque - 113;
			n100 = 1;
			n5 = 1;
			n2 = 4;
		}
		else if (saque % 100 == 7){
			saque = saque - 117;
			n100 = 1;
			n10 = 1;
			n5 = 1;
			n2 = 1;
		}
		else if (saque % 100 == 6){
			saque = saque - 116;
			n100 = 1;
			n10 = 1;
			n2 = 3;
		}
		else if (saque % 100 == 8){
			saque = saque - 118;
			n100 = 1;
			n10 = 1;
			n2 = 4;
		}
		else{
		saque = saque - 100;
		n100++;
		}
	}
	
	// Notas de 50 Reais
	while (saque >= 50 && saque < 100){
		if (saque % 50 == 1){
			saque = saque - 51;
			n20 = 2;
			n5 = 1;
			n2 = 3;
		}
		else if (saque % 50 == 3){
			saque = saque - 53;
			n20 = 2;
			n5 = 1;
			n2 = 4;
		}
		else if (saque % 50 == 7){
			saque = saque - 57;
			n50 = 1;
			n5 = 1;
			n2 = 1;
		}
		else if (saque % 50 == 6){
			saque = saque - 56;
			n50 = 1;
			n2 = 3;
		}
		else if (saque % 50 == 8){
			saque = saque - 58;
			n50 = 1;
			n2 = 4;
		}
		else{
		saque = saque - 50;
		n50++;
		}
	}
	
	// Notas de 20 Reais
	while (saque >=20 && saque < 50){
		if (saque % 20 == 1){
			saque = saque - 21;
			n10 = 1;
			n5 = 1;
			n2 = 3;
		}
		else if (saque % 20 == 3){
			saque = saque - 23;
			n10 = 1;
			n5 = 1;
			n2 = 4;
		}
		else if (saque % 20 == 7){
			saque = saque - 27;
			n20 = 1;
			n5 = 1;
			n2 = 1;
		}
		else if (saque % 20 == 6){
			saque = saque - 26;
			n20 = 1;
			n2 = 3;
		}
		else if (saque % 20 == 8){
			saque = saque - 28;
			n20 = 1;
			n2 = 4;
		}
		else{
		saque = saque - 20;
		n20++;
		}
		
		
	}
	
	// Notas de 10 Reais
	while (saque >= 10 && saque < 20){
		if (saque % 10 == 1){
			saque = saque - 11;
			n5 = 1;
			n2 = 3;
		}
		else if (saque % 10 == 3){
			saque = saque - 13;
			n5 = 1;
			n2 = 4;
		}
		else if (saque % 10 == 7){
			saque = saque - 17;
			n10 = 1;
			n5 = 1;
			n2 = 1;
		}
		else if (saque % 10 == 6){
			saque = saque - 16;
			n10 = 1;
			n2 = 3;
		}
		else if (saque % 10 == 8){
			saque = saque - 18;
			n10 = 1;
			n2 = 4;
		}
		else{
		saque = saque - 10;
		n10++;
		}
	}
	
	// Notas de 5 Reais
	while (saque >= 5 && saque <10){
		if (saque % 5 == 1){
			saque = saque - 6;
			n2 = 3;
		}
		else if (saque % 5 == 3){
			saque = saque - 8;
			n2 = 4;
		}
		else if (saque % 50 == 6){
			saque = saque - 56;
			n50 = 1;
			n2 = 3;
		}
		else if (saque % 50 == 8){
			saque = saque - 58;
			n50 = 1;
			n2 = 4;
		}
		else{
		saque = saque - 5;
		n5++;
		}
	}
	
	// Notas de 2 Reais
	while (saque >= 2 && saque <5){
		saque = saque - 2;
		n2++;
	}
	
}


// Função para adicionar dinheiro ao caixa
int add(int caixamais)
{

    int valorcaixa = caixa;

    caixa = caixa + caixamais;

    return valorcaixa;
}

// Função para resetar o valor das variáveis a cada saque
void limpa_variavel(){
	n200 = 0;
	n100 = 0;
	n50 = 0;
	n20 = 0;
	n10 = 0;
	n5 = 0;
	n2 = 0;
}


// Start
int menu (){
	// Variáveis
	setlocale (LC_ALL, "Portuguese");
	int saque, op, op2;
	
	// Start
	
	system("cls");
    printf("CAIXA ELETRONICO 24 HORAS \n");
    printf("\n");
    printf("Escolha a operação: \n");
    printf("\n");
    printf("1 - Sacar dinheiro \n");
    printf("2 - Inserir dinheiro no caixa \n");
    printf("3 - Ver saldo atual do caixa \n");
    printf("4 - Sair \n");
    scanf("%d", &op);
	
	
// Sacar dinheiro	
	if (op == 1)
	{
		system ("cls");
		printf ("Digite o valor do saque: \n");
		scanf ("%d", &saque);
		
		if (caixa >= saque)
		{
			// Verifica se o valor é igual a 1
			if (saque == 1){
				printf ("Impossível receber esse valor. \n");
			}
			else{
			notas(saque);
				}
			
			// Amostragem por quantidade de notas
			if (n200 > 1 || n200 == 0){
				printf ("Notas de R$ 200: %d notas \n", n200);
			}
			else{
				printf ("Notas de R$ 200: %d nota \n", n200);
			}
			
			if (n100 > 1 || n100 == 0){
				printf ("Notas de R$ 100: %d notas \n", n100);
			}
			else{
				printf ("Notas de R$ 100: %d nota \n", n100);
			}
			
			if (n50 > 1 || n50 == 0){
				printf ("Notas de R$ 50: %d notas \n", n50);
			}
			else{
				printf ("Notas de R$ 50: %d nota \n", n50);
			}
			
			if (n20 > 1 || n20 == 0){
				printf ("Notas de R$ 20: %d notas \n", n20);
			}
			else{
				printf ("Notas de R$ 20: %d nota \n", n20);
			}
			
			if (n10 > 1 || n10 == 0){
				printf ("Notas de R$ 10: %d notas \n", n10);
			}
			else{
				printf ("Notas de R$ 10: %d nota \n", n10);
			}
			
			if (n5 > 1 || n5 == 0){
				printf ("Notas de R$ 5: %d notas \n", n5);
			}
			else{
				printf ("Notas de R$ 5: %d nota \n", n5);
			}
			
			if (n2 > 1 || n2 == 0){
				printf ("Notas de R$ 2: %d notas \n", n2);
			}
			else{
				printf ("Notas de R$ 2: %d nota \n", n2);
			}
	}
	else{
		system ("cls");
		printf ("Valor indisponível no caixa. \n");
	}
		printf("\n");
		printf ("Deseja fazer outra operação? \n");
		printf ("1 - Sim \n");
		printf ("2 - Não \n");
		scanf ("%d", &op2);
		
		if (op2 == 1)
		{
			
			system("cls");
			limpa_variavel();
			menu();
		}
		if (op2 == 2){
		 exit;
		}
		
	}
	
	if (op == 2){
		system("cls");
        printf("Digite o valor a ser inserido: \n");
        scanf("%d", &caixamais);

        caixamais = add(caixamais);

        printf("Operação concluída. \n");
        printf("\n");
        if (caixa > 1 || caixa == 0){
        	printf("Valor atual no caixa: %d reais\n", caixa);
		}
		else{
			printf("Valor atual no caixa: %d real\n", caixa);
		}
        printf("\n");
        printf("Deseja voltar ao menu? \n");
        printf("1 - Sim \n");
        printf("2 - Não \n");
        scanf("%d", &op2);

        if (op2 == 1)
        {
            menu();
        }
        else
        {
            exit;
        }
	}
	
	if (op == 3){
		system("cls");
        if (caixa > 1 || caixa == 0)
        {
            printf("Saldo atual do caixa: %d reais \n", caixa);
            printf("\n");
        }
        else
        {
            printf("Saldo atual do caixa: %d real \n", caixa);
            printf("\n");
        }
		printf("\n");
		printf("Operação concluída. \n");
		printf("\n");
        printf("Deseja voltar ao menu? \n");
        printf("1 - Sim \n");
        printf("2 - Não \n");
        scanf("%d", &op2);

        if (op2 == 1)
        {
            menu();
        }
        else
        {
            exit;
        }
	}
	
	if (op == 4){
		system ("cls");
		printf ("Obrigado por utilizar nossos serviços. \n");
		exit;
	}
	
}


int main (){
	// Tela Inicial	
	printf("============================================= \n");
	printf("==                                         == \n");
	printf("==                                         == \n");
	printf("==                                         == \n");	
	printf("==  _________        .__                   == \n");
	printf("==  \\_   ___ \\_____  |__|__  ________      == \n");
	printf("==  /    \\  \\/\\__  \\ |  \\  \\/  /\\__  \\     == \n");
	printf("==  \\     \\____/ __ \\|  |>    <  / __ \\_   == \n");
	printf("==   \\______  (____  /__/__/\\_ \\(____  /   == \n");
	printf("==          \\/     \\/         \\/     \\/    == \n");
	printf("==                                         == \n");
	printf("==                                         == \n");
	printf("==                                         == \n");	
	printf("============================================= \n");
	
	
	system ("pause");
	system ("cls");

    printf("Informe o valor inicial do caixa: \n");
    scanf("%d", &caixa);
    printf("\n");
    if (caixa > 1 || caixa == 0)
    {
        printf("Caixa iniciado com o valor: %d reais \n", caixa);
        printf("\n");
    }
    else
    {
        printf("Caixa iniciado com o valor: %d real \n", caixa);
        printf("\n");
    }

    system("pause");
    menu();
	
}
