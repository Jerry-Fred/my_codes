#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

	//Directivas
	#ifdef _WIN32
    #define LIMPAR_TELA "cls"   // Windows
#else
    #define LIMPAR_TELA "clear" // Linux/Termux/Mac
#endif

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[60];
	int senha;
	int contador=0;
	
	do{
		system(LIMPAR_TELA);
        
        printf("=========================================\n");
        printf("          SISTEMA DE LOGIN               \n");
        printf("=========================================\n");
        
        if (contador > 0) {
            printf("  [Aviso] Senha incorreta! Tentativa %d de 3\n", contador);
            printf("-----------------------------------------\n");
        }
        
        if (contador == 3) {
            printf("\n  Excedeu as %d tentativas... Adeus.\n", contador);
            printf("=========================================\n");
            break;
        }
	
		else{	
			printf("Nome: ");
			scanf(" %59[^\n]", nome);
			printf("Senha: ");
			scanf("%d",&senha);
			
			if(senha==1234){
				system("cls"); // Clean tje screen
	            printf("=========================================\n");
	            printf("          ACESSO PERMITIDO!              \n");
	            printf("=========================================\n");
	            printf("  Bem-vindo ao sistema, %s.\n", nome);
	            printf("=========================================\n");
			}
			else{
				printf("\nAcesso Negado!\n");
				contador++;		
			}
		}
		
	}while(senha!=1234);
	
	return (0);	
}