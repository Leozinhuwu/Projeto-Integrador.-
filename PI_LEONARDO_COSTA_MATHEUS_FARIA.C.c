

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //biblioteca para comparar strings.
#include <time.h>    // biblioteca para uso de funcional de srand.
#include <windows.h>

#define CONTINUAR "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nAPERTE ENTER PARA CONTINUAR. "
#define TAMRIFA 51
#define TAM 10
#define TAMPREMIOS 10

struct cadastro{
	char nome [100];
	char apelido[100];
	char senha[100];
	char tipoUser[100];
	
};
struct cadastrar{
	char premio1[100];
	char premio2[100];
	char premio3[100];
	char premio4[100];
	char premio5[100];
	
};

//globais
struct cadastro pessoa[TAM];
struct cadastrar premios[TAMPREMIOS];

int indice = -1;
int posicaoatual = 0;
int posicaoatualpremios = 0;

char adm[1] = {'A'};
char usuario[1] = {'U'};

int rifa[TAMRIFA];
char desenharifa[TAMRIFA];

void gotoxy(int x, int y) {  //void para utilizar o gotoxy

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void simular(){
	posicaoatual = 0;
	strcpy(pessoa[posicaoatual].nome, "rodigo");
	strcpy(pessoa[posicaoatual].apelido, "marcondes");
	strcpy(pessoa[posicaoatual].senha, "123");
	
	posicaoatual = 1;
	
	strcpy(pessoa[posicaoatual].nome, "analisa");
	strcpy(pessoa[posicaoatual].apelido, "ana");
	strcpy(pessoa[posicaoatual].senha, "123");
	
}
void moldura(void){
int i, j, l, k;       //variaveis para receber o código ASCII
        
    for (i = 0; i < 94; i++) {  //////// controle de tamanho superior horizontal 
        printf("%c", 220);
    }
    printf("\n");

    for (j = 0; j < 17; j++) { //controle de tamanho para baixo 
        printf("%c", 219);
        for (i = 0; i < 92; i++) { /////// parte parede direita (alto)
            printf(" ");
        }
        printf("%c\n", 219);
    }

    printf("%c", 219);
    for (i = 0; i < 36; i++) { //////////////// meio parede direita
        printf(" ");
    }
    printf("                         ");
    for (i = 0; i < 31; i++) {  /////////// meio parede direita
        printf(" ");
    }
    printf("%c\n", 219);

    for (j = 0; j < 9; j++) {
        printf("%c", 219);
        for (i = 0; i < 92; i++) { ///////// parte parede direita 
            printf(" ");
        }
        printf("%c\n", 219);
    }
    printf("%c", 219);
    for (i = 0; i < 92; i++) {   /////// controle de tamanho inferior horizontal
        printf("%c", 220);
    }
    printf("%c", 219);
   
}

void tela_inicial(void){

gotoxy(34,8);
printf("B A T U T A - S T O N K S");
gotoxy(39,15);
printf("SELECIONE");
gotoxy(17,17);
printf("1 - CADASTRO DE USUARIO.");
gotoxy(17,19);
printf("2 - CADASTRO DE ADM.");
gotoxy(17,21);
printf("3 - LOGAR DO SISTEMA.");
gotoxy(17,23);
printf("0 - SAIR DO SISTEMA.");
gotoxy(15,26);
printf("______________________________________________________________");
gotoxy(16,25);
printf("Digite aqui sua escolha:[ ]"); 
 
}
void bigerror(){
// 11 PRINTF printf("%c", 177);	
// LINHA 5
// COLUNHA COMECA EM 2 E ADICONA 1 ATE 12
int i;
int coluna, linha;

linha = 5;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	coluna++;
}


//////////////////////////////////////////// coluna e grossa
linha = 6;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}


//////////////////////////////////////////// coluna e grossa 2
linha = 7;
coluna = 2;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}


///// sombra
linha = 8;
coluna = 3;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}


linha = 7;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
}
linha = 7;
coluna = 3;
for(i = 0; i < 4; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}
linha = 7;
coluna = 7;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}

linha = 8;
coluna = 8;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
}
linha = 7;
coluna = 8;
for(i = 0; i < 4; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}
linha = 7;
coluna = 12;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}

linha = 20;
coluna = 3;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 19;
coluna = 2;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}

gotoxy(19,2);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 177,219,219,219,219,219,219,219,219,219,219,219,219,219);

linha = 32;
coluna = 4;
for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 22;
coluna = 7;
for(i = 0; i < 12; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}

linha = 33;
coluna = 3;
for(i = 0; i < 1; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 33;
coluna = 3;
for(i = 0; i < 6; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}
linha = 33;
coluna = 7;
for(i = 0; i < 1; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 34;
coluna = 4;
for(i = 0; i < 3; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 29;
coluna = 8;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
}

linha = 32;
coluna = 9;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	coluna++;
}

linha = 29;
coluna = 8;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
}
linha = 30;
coluna = 9;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
	coluna++;
}
linha = 33;
coluna = 10;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
	coluna++;
}
linha = 34;
coluna = 12;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c%c", 177,219);
	linha++;
}
linha = 32;
coluna = 11;
for(i = 0; i < 1; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
}
linha = 33;
coluna = 12;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c%c%c", 177,177,177);
	linha++;
}

linha = 30;
coluna = 8;
for(i = 0; i < 3; i++){
	gotoxy(linha,coluna);
	printf("%c%c%c", 219,219,219);
	linha++;
	coluna++;
	
}

linha = 34;
coluna = 12;
for(i = 0; i < 1; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
	
}

linha = 33;
coluna = 11;
for(i = 0; i < 1; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 219,219,219);
	linha++;
}

linha = 21;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
}

linha = 20;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
}
linha = 19;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;
}
linha = 39;
coluna = 3;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;
}
linha = 38;
coluna = 2;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;
}

gotoxy(38,2);
printf("%c", 177);

linha = 51;
coluna = 4;
for(i = 0; i < 4; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
}

linha = 41;
coluna = 7;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;
}
linha = 52;
coluna = 3;
for(i = 0; i < 6; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
}
linha = 53;
coluna = 4;
for(i = 0; i < 3; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
}

linha = 53;
coluna = 12;
for(i = 0; i < 1; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 177,177,219);
	linha++;
}
linha = 48;
coluna = 8;
for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;
	linha++;
}


/////////////////abertura de perna r²

gotoxy(50,10);
printf("%c", 177);
gotoxy(50,8);
printf("%c", 177);

gotoxy(51,11);
printf("%c", 177);
gotoxy(51,9);
printf("%c", 177);

linha = 52;
coluna = 10;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;
}
gotoxy(53,12);
printf("%c", 219);

linha = 49;
coluna = 8;
for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 219,219,219);
	coluna++;
	linha++;
}
linha = 40;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}

linha = 39;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}

linha = 38;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;

}

linha = 58;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}
linha = 57;
coluna = 2;
for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;

}
linha = 58;
coluna = 12;
for(i = 0; i < 12; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;

}
gotoxy(57,12);
printf("%c", 177);

linha = 57;
coluna = 7;
for(i = 0; i < 6; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;

}

linha = 59;
coluna = 2;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}
linha = 59;
coluna = 2;
for(i = 0; i < 12; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;

}

linha = 68;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}

linha = 69;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}

linha = 70;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}

linha = 73;
coluna = 3;
for(i = 0; i < 14; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;

}
linha = 72;
coluna = 2;
for(i = 0; i < 14; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;

}

gotoxy(72,2);
printf("%c", 177);

linha = 85;
coluna = 4;

for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}
linha = 75;
coluna = 7;

for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	linha++;

}
linha = 86;
coluna = 4;

for(i = 0; i < 4; i++){
	gotoxy(linha,coluna);
    printf("%c%c", 219,219);
	coluna++;

}
gotoxy(34,7);
printf("%c",219);
gotoxy(53,7);
printf("%c",219);

linha = 86;
coluna = 7;

for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;

}

gotoxy(86,3);
printf("%c", 219);

linha = 82;
coluna = 8;

for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;
	linha++;

}
linha = 86;
coluna = 12;

for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 177,219,219);
	linha++;

}
linha = 83;
coluna = 8;
for(i = 0; i < 4; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 219,219,219);
	coluna++;
	linha++;
}

gotoxy(87,12); 
printf("%c", 219);

linha = 74;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
	
}
linha = 73;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 219,219,219);
	coluna++;
	
}
linha = 72;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
    printf("%c", 177);
	coluna++;
	
}
linha = 22;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
	
}
linha = 41;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
	
}
linha = 60;
coluna = 3;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
    printf("%c", 219);
	coluna++;
	
}
gotoxy(35,12);
printf("%c%c",219,219);

gotoxy(6,14);
printf("___________________________________________________________________________________");
            
}
void bigrifa (){
	
int i;
int coluna, linha;

linha = 18;
coluna = 3;
for(i = 0; i < 14; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 18;
coluna = 2;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}


gotoxy(17,2);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 177,219,219,219,219,219,219,219,219,219,219,219,219,219);

linha = 30;
coluna = 4;
for(i = 0; i < 4; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 20;
coluna = 7;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 31;
coluna = 4;
for(i = 0; i < 3; i++){
	gotoxy(linha,coluna);
	printf("%c%c", 219,219);
	coluna++;
}
linha = 31;
coluna = 3;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 31;
coluna = 7;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}
linha = 27;
coluna = 8;
for(i = 0; i < 3; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
	coluna++;
}
linha = 31;
coluna = 12;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 177,117,117);
	linha++;
}
linha = 31;
coluna = 10;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
	coluna++;
}
linha = 29;
coluna = 8;
for(i = 0; i < 2; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	linha++;
	coluna++;
}

gotoxy(32,12);
printf("%c",219);
gotoxy(30,11);
printf("%c", 177);

linha = 28;
coluna = 8;

for(i = 0; i < 4; i++){
	gotoxy(linha,coluna);
    printf("%c%c%c", 219,219,219);
	linha++;
	coluna++;
}

gotoxy(33,12);
printf("%c", 219);

linha = 19;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 18;
coluna = 4;
for(i = 0; i < 9; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 17;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	coluna++;
}

linha = 39;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	coluna++;
}


gotoxy(39,1);
printf("%c", 177);

linha = 40;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

gotoxy(40,1);
printf("%c", 219);

linha = 41;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

gotoxy(41,1);
printf("%c", 219);

linha = 45;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	coluna++;
}

linha = 47;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}
linha = 46;
coluna = 3;
for(i = 0; i < 3; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}
linha = 46;
coluna = 3;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}

gotoxy(46,6);
printf("%c%c%c%c%c%c%c%c%c%c", 219,219,219,219,219,219,219,219,219,219);
gotoxy(46,7);
printf("%c%c%c%c%c%c%c%c%c%c", 219,219,219,219,219,219,219,219,219,219);

linha = 46;
coluna = 8;
for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 46;
coluna = 3;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 46;
coluna = 2;
for(i = 0; i < 13; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 62;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 61;
coluna = 2;
for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	coluna++;
}

linha = 61;
coluna = 8;
for(i = 0; i < 5; i++){
	gotoxy(linha,coluna);
	printf("%c", 177);
	coluna++;
}

linha = 62;
coluna = 7;
for(i = 0; i < 12; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
gotoxy(61,7);
printf("%c", 177);

linha = 63;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 63;
coluna = 3;
for(i = 0; i < 12; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}
linha = 63;
coluna = 2;
for(i = 0; i < 10; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	linha++;
}

linha = 72;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 73;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
}

linha = 74;
coluna = 2;
for(i = 0; i < 11; i++){
	gotoxy(linha,coluna);
	printf("%c", 219);
	coluna++;
	
	gotoxy(34,12);
	printf("%c", 219);
	gotoxy(32,7);
	printf("-----------------------------");
	gotoxy(32,8);
	printf("           ");
	gotoxy(32,9);
	printf("                             ");
	gotoxy(32,9);
	printf("-----------------------------");
	gotoxy(15,13);
	printf("______________________________________________________________");

	}
}
void vericadorTimeCadastro(void){


            gotoxy(55,27); 
			printf("VERIFICANDO DADOS ");
			sleep(1);
			gotoxy(72,27);
			printf(".");
			sleep(1);
			gotoxy(73,27);
			printf(".");
			sleep(1);
			gotoxy(74,27);
			printf(".");
			gotoxy(54,27); 
            printf("CADASTRADO COM SUCESSO!");
	 		sleep(1);
			
}
void sorteio_timer(){
	
	 	gotoxy(57,27); 
		printf("GERANDO NUMEROS");
		sleep(1);
		gotoxy(72,27);
		printf(".");
		sleep(1);
		gotoxy(73,27);
		printf(".");
		sleep(1);
		gotoxy(74,27);
		printf(".");	
}
//gravando dados do usuario na struct[vetor] pessoa.
void gravarpessoa(){
	
	fflush(stdin);
	gotoxy(40,16);
	gets(pessoa[posicaoatual].nome);
	
	fflush(stdin);
	gotoxy(43,20);
	gets(pessoa[posicaoatual].apelido);
	
	fflush(stdin);
	gotoxy(41,24);
	gets(pessoa[posicaoatual].senha);
	
	//define o tipo de usuario como usuario(comum)
	strcat(pessoa[posicaoatual].tipoUser , usuario);
	
	posicaoatual++;

	
}
//gravando ADM 
void gravarpessoaADM(){
	
	fflush(stdin);
	gotoxy(40,18);
	gets(pessoa[posicaoatual].apelido);
	
	fflush(stdin);
	gotoxy(41,21);
	gets(pessoa[posicaoatual].senha);
	//define tipo de usuario como adm
	strcat(pessoa[posicaoatual].tipoUser , adm);
	
	posicaoatual++;
	
}
void cadastrarpremios(){
	
	gotoxy(40,16);
	fflush(stdin);
	gets(premios[posicaoatualpremios].premio1);
	gotoxy(40,18);
	fflush(stdin);
	gets(premios[posicaoatualpremios].premio2);
	gotoxy(40,20);
	fflush(stdin);
	gets(premios[posicaoatualpremios].premio3);
	gotoxy(40,22);
	fflush(stdin);
	gets(premios[posicaoatualpremios].premio4);
	gotoxy(40,24);
	fflush(stdin);
	gets(premios[posicaoatualpremios].premio5);
	
	posicaoatualpremios++;
	
}

int autenticar(char apelido[], char senha[]){
	int i;
	int compara = -1;
	int retorno = 0;
	//perconrrendo a struct pessoa em apelido/senha e procurando dados coletados
	for(i = 0; i < TAM; i++){
		pessoa[i].apelido;
		compara = strcmp(pessoa[i].apelido, apelido);
		if (compara == 0){    //achou apelido no vetor
			compara = strcmp(pessoa[i].senha, senha);
			if(compara == 0){ //achou a senha
				retorno = 1;
				indice = i;  // indici recebendo a posicao da strutct pessoa aonde se encontra o apelido e a senha
				
			}
		break;	
		}
		
		
	}
	
	return retorno; 
}
void telacadastro(){
	if(posicaoatual == TAM){
		system("CLS");
		printf("LIMITE MAXIMO DE USUARIOS");
		
	}else{

	gotoxy(39,8);
	printf("C A D A S T R 0");


    gotoxy(15,13);
	printf("______________________________________________________________");

	
	gotoxy(23,16);
    printf("|DIGITE SEU NOME: ");
    gotoxy(23,20); 
	printf("|DIGITE SEU APELIDO: ");
	gotoxy(23,24);	
	printf ("|DIGITE SUA SENHA: ");
	gotoxy(15,26);
    printf("______________________________________________________________");
	}
	
}
void telacadastroADM(){
if(posicaoatual == TAM){
		system("CLS");
		printf("LIMITE MAXIMO DE ADMS");
		
	}else{

			gotoxy(35,7);
	        printf("------------");
			gotoxy(35,8);
			printf("C A D A S T R O - A D M");
			gotoxy(35,9);
			printf("------------");
			gotoxy(15,13);
			printf("______________________________________________________________");
			gotoxy(23,18);
    		printf("|DIGITE SEU NOME: ");
    		gotoxy(23,21); 
			printf("|DIGITE SUA SENHA: ");
			gotoxy(15,26);
    		printf("______________________________________________________________");
	}
}
void telalog(){

gotoxy(40,7);
printf("--------------------");

gotoxy(40,8);
printf(" L O G I N");

gotoxy(40,9);
printf("---------------");
gotoxy(19,13);
printf("__________________________________________________________");
	
	
    gotoxy(20,17);
	printf("|DIGITE SEU APELIDO: ");
	gotoxy(20,22);
	printf("|DIGITE SUA SENHA: ");
	gotoxy(15,26);
    printf("______________________________________________________________");
	
}
int telaentrar(){
	 
	 char apelido[100];
     char senha[100];
     int autenticado;
	
	//pegando dados de login
	fflush(stdin);
    gotoxy(40,17);
	gets(apelido);
    fflush(stdin);
    gotoxy(38,22);
    gets(senha);
    
    //enviado dados coletados para autenticar
    autenticado = autenticar(apelido, senha);
   
    //nao encontrou
    if(autenticado == 0){
    	system("cls");
    	moldura();
		bigerror();
	
		gotoxy(6,20);
		printf("DADOS INVALIDOS, ");
		sleep(1);
		
		
		
    	}else{
    		gotoxy(55,27);
			printf("VERIFICANDO DADOS ");
			sleep(1);
			gotoxy(72,27);
			printf(".");
			sleep(1);
			gotoxy(73,27);
			printf(".");
			sleep(1);
			gotoxy(74,27);
			printf(".");
			sleep(1);
			gotoxy(48,27);
			printf("LOGIN REALIZADO COM SUCESSO!!");
			sleep(1);
			
		}
  // retornando para o switch case do main se achou ou nao.
  return autenticado;
		
}
//inicializa vetor de recebendo com -1
int* inicializaPonteiro(int valor, int tam) {
	int* vet = (int*)malloc(tam * sizeof(int));
	int i;
	// inicializando vetor
	for (i = 0; i < tam; i++) {
		vet[i] = valor;
	}
	return vet;
}
//sorteando numeros aleatorios
int sorteiaNovoNumero(int* rifa, int* numsSorteados, int tamSorteados) {
	int tipoc = 1;
	
	int tamLivres = 0;
	int* numsLivres = inicializaPonteiro(-1, TAMRIFA );
	int i;
	// encontrando todos os números que não foram comprados
	for (i = 0; i < TAMRIFA; i++) {
		if (rifa[i] == -1) {
			numsLivres[tamLivres] = i;
			tamLivres++;
		}
	}

	// sorteando numero aleatório
	srand(GetTickCount());
	int sorteado = rand() % tamLivres;
	numsSorteados[tamSorteados] = numsLivres[sorteado];
	tamSorteados++;

	// Comprando número sorteado na rifa
	rifa[numsLivres[sorteado]] = indice;
	
	//desenhando numeros sorteados na rifa
	desenharrifa(numsLivres[sorteado], tipoc);
	return tamSorteados;
}
//recebendo a quantidade de numeros que o usuario quer comprar por referencia
int* sorteiaNumerosValidos(int qtd) {
	int tamComprados = 0;
	int* numsComprados = inicializaPonteiro(-1, TAMRIFA + 1);
	// preenchendo o vetor tams comprados com números aleatórios
	int i;
	for (i = 0; i < qtd; i++) {
		tamComprados = sorteiaNovoNumero(rifa, numsComprados, tamComprados);
	}

	return numsComprados;
}
void zerarifa (){
	int i;
	for(i = 0; i < TAMRIFA; i++){
		rifa[i] = -1;
	}
	rifa[0] = 6666;
}

void zerardesenharifa(){
	int i;
	
	for (i = 0; i < TAMRIFA; i++){
		desenharifa[i] = ' ';
	}
}
void usernumerosrifa(){
	
	int i;
    int c = 0;
    int linha , coluna;
	coluna = 5;
	linha = 10;
    for(i = 0; i < TAMRIFA; i++){
        
		if(rifa[i] == indice){
            if(desenharifa[i - 1] == 'C'){
                gotoxy(linha,coluna);
				c++;
                printf("C-[ %d ]", i);
                linha = linha + 8;
                if(c%10 == 0 ){
                    coluna++;
                    linha = 10;
                }
            }
            if(desenharifa[i - 1] == 'R'){
                gotoxy(linha,coluna);
				c++;
                printf("R-[ %d ]", i);
                linha = linha + 8;
                if(c%10 == 0 ){
                    coluna++;
                    linha = 10;
                }
            }    
        }
    }
	
	if(c > 0){
		
	    gotoxy(15,26);
        printf("______________________________________________________________");
        gotoxy(15,13);
        printf("______________________________________________________________");
		gotoxy(23,18);
		printf("ESSES SAO SEUS NUMEROS COMPRADOS E RESERVADOS");
		gotoxy(23,20);
		printf("APERTE QUALQUER TECLA PARA VOLTAR PARA O MENU!");
		getch();
	
	}else{
		
		
		bigrifa();
		gotoxy(39,8);
	    printf("N U M E R O S");
		gotoxy(23,19);
		printf("VOCE NAO TEM NUMEROS COMPRADOS OU RESERVADOS");
		gotoxy(15,26);
        printf("______________________________________________________________");
		gotoxy(23,21);
		printf("APERTE QUALQUER TECLA PARA VOLTAR PARA O MENU!");
		getch();
	
	}
}

void sortearnumerosvencedores(){
	int i = 0;
	int nomevencedor1, nomevencedor2, nomevencedor3, nomevencedor4, nomevencedor5;
	
	srand(time(NULL));
	int vencedor1, vencedor2, vencedor3, vencedor4, vencedor5;
	 //sorteando numero ate que todos sejam diferentes
	 while(i != 1) { 
	 vencedor1 = rand()%49+1;
	 vencedor2 = rand()%49+1;
	 vencedor3 = rand()%49+1;
	 vencedor4 = rand()%49+1;
	 vencedor5 = rand()%49+1;
	 
	 //verifcando se algum dos numeros sorteados sao iguais.
	 if((vencedor1 != vencedor2) && (vencedor1 != vencedor3) && (vencedor1 != vencedor4) && (vencedor1 != vencedor5)) {
	 	if ((vencedor2 != vencedor1) && (vencedor2 != vencedor3) && (vencedor2 != vencedor4) && (vencedor2 != vencedor5)){
	 		 if((vencedor3 != vencedor1) && (vencedor3 != vencedor2) && (vencedor3 != vencedor4) && (vencedor3 != vencedor5)){
	 		 	if ((vencedor4 != vencedor1) && (vencedor4 != vencedor2) && (vencedor4 != vencedor3) && (vencedor4 != vencedor5)){
	 		 		if ((vencedor5 != vencedor1) && (vencedor5 != vencedor2) && (vencedor5 != vencedor3) && (vencedor5 != vencedor4)){
	 		 			i = 1;
					  }
	 		 		
				  }
			  	}
		 	}
		}
	 }
	nomevencedor1 = rifa[vencedor1];
	nomevencedor2 = rifa[vencedor2];
	nomevencedor3 = rifa[vencedor3];
	nomevencedor4 = rifa[vencedor4];
	nomevencedor5 = rifa[vencedor5];
	gotoxy(40,8);
    printf("S O R T E I O");
	gotoxy(15,26);
    printf("______________________________________________________________");
   
	gotoxy(7,15);
	printf("PRIMEIRO VENCEDOR E O NUMERO [ %d ]", vencedor1);
	gotoxy(7,16);
	printf("PREMIO:");
	gotoxy(16,16);
	puts(premios[posicaoatualpremios - 1].premio1);
	gotoxy(7,17);
	printf("NOME:");
	gotoxy(13,17);
	puts(pessoa[nomevencedor1].nome);
   	sorteio_timer();
	gotoxy(55,15);
	printf("SEGUNDO VENCEDOR E O NUMERO [ %d ]",  vencedor2);
	gotoxy(55,16);
	printf("PREMIO:");
	gotoxy(64,16);
	puts(premios[posicaoatualpremios - 1].premio2);
	gotoxy(55,17);
	printf("NOME:");
	gotoxy(61,17);
	puts(pessoa[nomevencedor2].nome);
	sorteio_timer();
	gotoxy(7,19);
	printf("TERCEIRO VENCEDOR E O NUMERO [ %d ]",  vencedor3);
	gotoxy(7,20);
	printf("PREMIO:");
	gotoxy(16,20);
	puts(premios[posicaoatualpremios - 1].premio3);
	gotoxy(7,21);
	printf("NOME:");
	gotoxy(13,21);
	puts(pessoa[nomevencedor3].nome);
	sorteio_timer();
	gotoxy(55,19);
	printf("QUARTO VENCEDOR E O NUMERO [ %d ]",  vencedor4);
	gotoxy(55,20);
	printf("PREMIO:");
	gotoxy(64,20);														
	puts(premios[posicaoatualpremios - 1].premio4);
	gotoxy(55,21);
	printf("NOME:");
	gotoxy(61,21);
	puts(pessoa[nomevencedor4].nome);
	sorteio_timer();
	gotoxy(30,23); 
	printf("QUINTO VENCEDOR E O NUMERO [ %d ]", vencedor5);
	gotoxy(30,24);
	printf("PREMIO:");
	gotoxy(38,24); 
	puts(premios[posicaoatualpremios - 1].premio5);
	gotoxy(30,25);
	printf("NOME:");
	gotoxy(36,25);
	puts(pessoa[nomevencedor5].nome);
	gotoxy(30,27); 
	printf("ESTES SAO OS GANHADORES DA RIFA BATUTA STONKS!!");

    
	getch();
}
void numerosrestantes (){
	
	
	int i;
	int c = 0;
	for (i = 1; i < TAMRIFA; i++){
		
		if(rifa[i] != -1){
			c++;
		}
	}
	if((c > 0) &&( c < 50)){
		//calculando numeros restantes
		c = (50 - c);
		gotoxy(40,8);
		printf("N U M E R O S");
		gotoxy(27,20);
		printf("FALTAM [ %d ] NUMEROS PARA COMPLETAR A RIFA", c);
		gotoxy(15,26);
    	printf("______________________________________________________________");
	}else if (c == 50){
		gotoxy(40,8);
		printf("N U M E R O S");
		gotoxy(27,20);
		printf("SUA RIFA ESTA COMPLETA!!!");
		gotoxy(15,26);
    	printf("______________________________________________________________");
	}else{
		gotoxy(40,8);
		printf("N U M E R O S");
		gotoxy(27,20);
		printf("TODOS OS NUMEROS ESTAO DISPONIVEIS!!");
		gotoxy(15,26);
    	printf("______________________________________________________________");
	}
		gotoxy(20,27);
		printf("APERTE QUALQUER TECLA PARA VOLTAR PARA O MENU!");
		fflush(stdin);
		getch();
	
}
void telamenuuser(){
	gotoxy(41,8);
    printf(" M E N U");
    gotoxy(40,15);
    printf("SELECIONE");
	gotoxy(20,18);
	printf("|1 - COMPRAR RIFA.");
	gotoxy(20,20);
	printf("|2 - VERIFICAR NUMEROS COMPRADOS E RESERVADOS.");
	gotoxy(20,22);
	printf("|3 - SAIR.");
	gotoxy(15,26);
    printf("______________________________________________________________");
	gotoxy(60,15);
    printf("BEM VINDO     [               ]");
	gotoxy(78,15);
	puts(pessoa[indice].nome);
}
void menuusuario(){
		system("CLS");
	int resp, menuUser;
	moldura();
	bigrifa();
	telamenuuser();
	gotoxy(20,24);
	printf("ESCOLHA UMA OPCAO: [ ]");
	gotoxy(40,24);
	fflush(stdin);
	scanf("%d", &menuUser);
	do{
		switch(menuUser){
			
			case 1:
				system("CLS");
				
				moldura();
				rifacompra();
				
				 
				
			break;
			
			case 2:
				//verificar numeros
				system("CLS");
				moldura();
				usernumerosrifa();
				
			break;
			
			case 3:
				resp = menuUser;
			break;
			
			default:
				//escolha errada
				system("cls");
				moldura();
				bigerror();
				gotoxy(10,20);
                printf("PORFAVOR, SELECIONE UMA DAS OPCOES VALIDAS");
				gotoxy(6,26);
                printf("___________________________________________________________________________________");
                gotoxy(52,20);
                printf(".");
                sleep(1);
                gotoxy(53,20);
                printf(".");
                sleep(1);
                gotoxy(54,20);
                printf(".");
                sleep(1);
				
		}
			if(menuUser != 3){
				system("CLS");
				moldura();
				bigrifa();
				telamenuuser();
				gotoxy(20,24);
				printf("ESCOLHA UMA OPCAO: [ ]");
				gotoxy(40,24);
				fflush(stdin);
				scanf("%d", &menuUser);	
			}	
				
	}while(resp != 3);
}
void telacadastrapremios(){
	
	gotoxy(40,8);
	printf("P R E M I O S");
	
	
	gotoxy(18,16);
	printf("|CADASTRE O PREMIO  1: ");
	gotoxy(18,18);
	printf("|CADASTRE O PREMIO  2: ");
	gotoxy(18,20);
	printf("|CADASTRE O PREMIO  3: ");
	gotoxy(18,22);
	printf("|CADASTRE O PREMIO  4: ");
	gotoxy(18,24);
	printf("|CADASTRE O PREMIO  5: ");
	gotoxy(15,26);
    printf("______________________________________________________________");
	
	

}

void telamenuADM(){
	gotoxy(38,8);
    printf("M E N U -  A D M");
    gotoxy(20,16);
	printf("|1 - CRIAR UMA RIFA E PREMIOS.");
	gotoxy(20,18);
	printf("|2 - VERIFICAR NUMEROS RESTANTES.");
	gotoxy(20,20);
	printf("|3 - SORTEIO.");
	gotoxy(20,22);
	printf("|4 - SAIR.");
	gotoxy(15,26);
    printf("______________________________________________________________");
	gotoxy(60,15);
    printf("BEM VINDO  ADM[               ]");
	gotoxy(78,15);
	puts(pessoa[indice].apelido);
}
void menuADM(){
	system("CLS");
	int resp, menuADM, confirma;
	moldura();
	bigrifa();
	telamenuADM();
	gotoxy(20,24);
	printf("ESCOLHA UMA OPCAO: [ ]");
	gotoxy(40,24);
	fflush(stdin);
	scanf("%d", &menuADM);
	do{
		switch(menuADM){
			
			case 1:
				gotoxy(45,24);
				printf("NOVA RIFA CONFIRMAR? | 1 - SIM | 2 - NAO: [ ]");
				gotoxy(45,25);
				printf("PRIMEIRA RIFA DIGITE 1");
				gotoxy(88,24);
				fflush(stdin);
				scanf("%d", &confirma);
				if(confirma == 1){
					zerarifa();
					zerardesenharifa();
					system("CLS");
					moldura();
					bigrifa();
					telacadastrapremios();
					cadastrarpremios();
					vericadorTimeCadastro();
				}else if(confirma  == 2){
					gotoxy(20,25);
					printf("ACAO CANCELADA");
					sleep(2);
				}else{
					gotoxy(20,25);
					printf("ESCOLHA INVALIDA, ACAO CANCELADA");
					sleep(2);
				}
				
				
			break;
			
			case 2:
				//verificar quantos numeros disponiveis da rifa
				system("CLS");
				moldura();
				bigrifa();
				numerosrestantes();
				
			break;
			
			case 3:
				//sortear numeros do ganhador
				system("CLS");
				moldura();
	            bigrifa();
				sortearnumerosvencedores();
				
			break;
			
			case 4:
				//sair
				resp = menuADM;
				break;
			default:
				//escolha errada
				system("cls");
				moldura();
				bigerror();
				gotoxy(10,20);
                printf("PORFAVOR, SELECIONE UMA DAS OPCOES VALIDAS");
				gotoxy(6,26);
                printf("___________________________________________________________________________________");
                gotoxy(52,20);
                printf(".");
                sleep(1);
                gotoxy(53,20);
                printf(".");
                sleep(1);
                gotoxy(54,20);
                printf(".");
                sleep(1);
				
		}
			if(menuADM != 4){
				system("CLS");
				moldura();
				bigrifa();
				telamenuADM();
				gotoxy(20,24);
				printf("ESCOLHA UMA OPCAO: [ ]");
				gotoxy(40,24);
				fflush(stdin);
				scanf("%d", &menuADM);
			}	
				
	}while(resp != 4);
}



//representando numeros comprados/reservados e cancelados
int desenharrifa(compra, tipo){

	
	 
	int i;
	int linha, coluna;
	int pula = 4;
	if (tipo == 1){
	desenharifa[compra -1] = 'C';	
	}
	else if(tipo == 2){
		desenharifa[compra -1] = 'R';
	}
	else if(tipo == 3){
		desenharifa[compra -1] = ' ';
	}
	 //representando compra no desenho
	linha = 17; // comeca na linha (trocar dentro da logica tambem)
	coluna = 2; //comeca na coluna
	for (i = 0; i < TAMRIFA; i++ ){
		
		gotoxy(linha,coluna);
		linha = linha+12;	
		if( i <= 8){
			
		printf("[ 0%i ]( %c ) ", i+1, desenharifa[i]);
		
		}else{
			
			printf("[ %i ]( %c ) ", i+1, desenharifa[i] );
			
		}

		
				
		//pulando linhas
		if(i == pula){
			 coluna++;//trocar por gotoxy
			linha = 17;
			pula = pula + 5;
		}
		
	
	
	}
	gotoxy(16,12);
	printf("            ");
}
void menudecompra(){
	int i;
	int coluna, linha;
	
	linha = 5;
	coluna = 13;
	for(i = 0; i < 84; i++){
		gotoxy(linha,coluna);
		printf("_");
		linha++;
		}
	linha = 5;
	coluna = 24;
	for(i = 0; i < 84; i++){
		gotoxy(linha,coluna);
		printf("_");
		linha++;
		}
	gotoxy(32,15);
	printf("BOA SORTE E BOAS COMPRAS ");
	gotoxy(10,17);
	printf("|1 - COMPRAR.");
	gotoxy(50,17);
	printf("|2 - RESERVAR.");
	gotoxy(10,19);
	printf("|3 - CANCELAR COMPRA OU RESERVA FEITA.");
	gotoxy(50,19);
	printf("|4 - $ ROLETA DA SORTE $.");
	gotoxy(10,21);
	printf("|5 - SAIR.");
	gotoxy(10,25);
	printf("SUA ESCOLHA: [   ]");
}
int rifacompra(){
	
	int i;
	int escolherrifa = 0;
	
	int acao;
	int resp;
	int quantos;
	int menudecompra1;
	desenharrifa();
	menudecompra();
	fflush(stdin);
	gotoxy(24,25);
	scanf("%d", &menudecompra1);
	while(resp != 5){
		
		
		
		
	switch(menudecompra1){
		
		case 1:
			
			acao = menudecompra1;
			gotoxy(10,26);
			printf("ESCOLHA O NUMERO DESEJADO: [   ]");
			gotoxy(38,26);
			fflush(stdin);
			scanf("%d", &escolherrifa);
			if((escolherrifa < 1) || (escolherrifa > 50)){
			gotoxy(10,27);	
		    printf("INVALIDO ! ESCOLHA UM NUMERO DE 1 A 50");
			sleep(2);
			}else{
				if (rifa[escolherrifa] == -1 ){
					//atribuindo o indice da pessoa na posicao do vetor da rifa que o usuario escolheu
					rifa[escolherrifa] = indice;
					//enviando pro desenha rifa qual numero e qual acao ele escolheu
					desenharrifa(escolherrifa, acao);
				}
				else if(rifa[escolherrifa] != -1){
					gotoxy(10,27);
					printf("VOCE OU OUTRO USUARIO JA COMPROU OU RESERVOU ESTE NUMERO !");
					sleep(2);
				}
			}
				
			break;
		case 2:
				acao = menudecompra1;
				gotoxy(10,26);
				printf("ESCOLHA UM NUMERO PARA RESERVAR: [   ] ");
				gotoxy(44,26);
				fflush(stdin);
				scanf("%d", &escolherrifa);
				if((escolherrifa < 1) || (escolherrifa > 50)){
				gotoxy(10,27);	
				printf("INVALIDO ! ESCOLHA UM NUMERO DE 1 A 50");
				sleep(2);
				}else{
				if (rifa[escolherrifa] == -1 ){
					rifa[escolherrifa] = indice;
					
					desenharrifa(escolherrifa, acao);
					
				}
				else if(rifa[escolherrifa] != -1){
					gotoxy(10,27);
					printf("VOCE OU OUTRO USUARIO JA COMPROU OU RESERVOU ESTE NUMERO !");
					sleep(2);
				}
			}
			
			break;
		case 3:
			acao = menudecompra1;
			gotoxy(10,26);
			printf("QUAL NUMERO DESEJA CANCELAR: [   ]");
			gotoxy(40,26);
			fflush(stdin);
			
			scanf("%d", &escolherrifa);
			if((escolherrifa < 1) || (escolherrifa > 50)){
				gotoxy(10,27);	
				printf("INVALIDO ! ESCOLHA UM NUMERO DE 1 A 50");
				sleep(2);
				}
			else if(rifa[escolherrifa] == indice){
					rifa[escolherrifa] = -1;
					
					
					desenharrifa(escolherrifa , acao);
					
					
			}else if((rifa[escolherrifa] != indice) && (rifa[escolherrifa] != -1)) {
				gotoxy(10,27);
				printf("O NUMERO ESCOLHIDO PERTENCE A OUTRO USUARIO!");
				sleep(1);
			}else if(rifa[escolherrifa] == -1){
				gotoxy(10,27);
				printf("ESSE NUMERO AINDA NAO FOI COMPRADO");
				sleep(3);
			}
			break;
		case 4:;
				int verifica = 0;
				gotoxy(10,26);
				printf("QUANTOS NUMEROS DESEJA SORTEAR: [   ]");
				gotoxy(43,26);
				fflush(stdin);
				scanf("%d", &quantos);
				if((quantos < 1) || (quantos > 50)){
					gotoxy(10,27);
					printf("NUMERO DE RIFAS NAO DISPONIVEIS");
					sleep(2);
				}else{
					for(i = 0; i < TAMRIFA; i++){
						if(rifa[i] == -1){
							verifica++;
						}
					}
					if(verifica == 0){
						gotoxy(10,27);
						printf("TODOS OS NUMEROS ESTAO COM RESERVA OU COMPRA JÁ EFETUADA");
					}
					if(quantos > verifica){
						
						gotoxy(10,27);
						printf("ERRO!!! NUMERO DE RIFAS DISPONIVEIS PARA COMPRA/RESERVA --> [ %d ]", verifica);
						sleep(4);
					}else{
						sorteiaNumerosValidos(quantos);
					}
					
				}
				
			break;		
		case 5:
			break;
		default:
			gotoxy(10,27);
			printf("FACA UMA ESCOLHA VALIDA !");
			sleep(2);
			
		
		}
		
		if (menudecompra1 != 5){
			system("CLS");
			moldura();
			desenharrifa();
			menudecompra();
			gotoxy(25,25);
			fflush(stdin);
			scanf("%d", &menudecompra1);
		}else if(menudecompra1 == 5){
			resp = menudecompra1;
		}
		
		
 }
}

main() {
    zerarifa();
	zerardesenharifa();
	
	
	
	//simular();
    system("color C0");
    system("title RIFA BATUTA STONKS");
    int menu1;
   
	
	moldura();
    bigrifa();
	tela_inicial();
	
	
    fflush(stdin);
    gotoxy(41,25);
	scanf("%i", &menu1);

    while (menu1 != 0) {  //adiocando loop de menu
        system("cls");
        switch (menu1) {  //executa os cases de acordo com o valor atribuido a variavel menu1.
            case 1:       //Instruções caso a escolha seja "1"
                system("CLS");
				moldura();
				bigrifa();
				telacadastro();
				gravarpessoa();
				vericadorTimeCadastro();
                break;
            case 2:  //Instruções caso a escolha seja "2"
                system("CLS");
				moldura();
				bigrifa();
				telacadastroADM();
                gravarpessoaADM();
                vericadorTimeCadastro();
                break;
            case 3:;
            	 int i = 0;
                 char resp;
				
            	do{
			    	system("CLS");
					moldura();
					bigrifa();
					telalog();
			    	i = telaentrar();
			    	if(i != 1){
			    		
						gotoxy(22,20);
			    		printf(" APERTE C PARA CONTINUAR ou QUALQUER OUTRA TECLA PARA SAIR");
			    		resp = getch();
					}
			    }while((i != 1) && (resp == 'c' || resp == 'C'));
			    
			    if (i == 1){
			    		int tipouser;
						tipouser = strcmp(pessoa[indice].tipoUser, adm);
						//tipo user diferente de zero = usuario comum.
						if (tipouser != 0){
						menuusuario();
						
					}else{
						//tipouser é igual a 0
						system("CLS");
						telamenuADM();
						menuADM();
						
					}
					
			    	
				}
			    
		
            	break;
            default:  //Instruções caso a escolha não esteja listada
                moldura();
                bigerror();
				
                gotoxy(10,20);
                printf("PORFAVOR, SELECIONE UMA DAS OPCOES VALIDAS");
                gotoxy(6,26);
                printf("___________________________________________________________________________________");
                gotoxy(52,20);
                printf(".");
                sleep(1);
                gotoxy(53,20);
                printf(".");
                sleep(1);
                gotoxy(54,20);
                printf(".");
                sleep(1);
                
        }

        system("cls");
        moldura();
		bigrifa();
		tela_inicial();
        fflush(stdin);
        gotoxy(41,25);
		scanf("%i", &menu1);
    }
}
