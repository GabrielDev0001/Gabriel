#include <stdio.h> 
#include <stdlib.h>
int main (){
	int num1;
	printf ("1. Acre \n 2. Alagoas \n 3. Amapa \n 4. Amazonas \n 5. Bahia \n 6. Ceara \n 7. Distrito Federal \n 8. Espirito Santo \n 9. Goias \n 10. Maranhao \n 11. Mato Grosso \n 12. Mato Grosso do Sul \n 13. Minas Gerais \n 14. Para \n 15. Paraiba \n 16. Parana \n 17. Pernambuco \n 18. Piaui \n 19. Rio de Janeiro \n 20. Rio Grande do Norte \n 21. Rio Grande do Sul \n 22. Rondonia \n 23. Roraima \n 24. Santa Catarina \n 25. Sao Paulo \n 26. Sergipe \n 27. Tocantins \n");
	scanf ("%d", &num1);
	switch (num1){
	
		case 1: printf ("\nREGIAO NORTE, CAPITAL RIO BRANCO\n");
		break;
	
		case 2: printf ("\nREGIAO NORTE, CAPITAL MACEIO\n");
		break;
		
		case 3: printf ("\nREGIAO NORDESTE, CAPITAL MACAPA\n");
		break;
		
		case 4: printf ("\nREGIAO NORTE, CAPITAL MANAUS\n");
		break;
		
		case 5: printf ("\nREGIAO NORDESTE, CAPITAL SALVADOR\n");
		break;
		
		case 6: printf ("\nREGIAO NORDESTE, CAPITAL FORTALEZA\n");
		break;
		
		case 7: printf ("\nREGIAO CENTRO-OESTE, CAPITAL BRASILIA\n");
		break;
		
		case 8: printf ( "\nREGIAO SUDESTE, CAPITAL VITORIA\n" );
		break;
		
		case 9: printf ( "\nREGIAO CENTRO-OESTE, CAPITAL GOIANIA\n" );
		break;
		
		case 10: printf ( "\nREGIAO NORDESTE, CAPITAL SAO LUIS\n" );
		break;
		
		case 11: printf ( "\nREGIAO CENTRO-OESTE, CAPITAL CUIABA\n" );
		break;
	
		case 12: printf ( "\nREGIAO CENTRO-OESTE, CAPITAL VCAMPO GRANDE\n" );
		break;
		
		case 13: printf ( "\nPARABENS, VC MORA NO MELHOR LUGAR DO MUNDO \nREGIAO SUDESTE, CAPITAL BELO HORIZONTE\n" );
		break;
		
		case 14: printf ( "\nREGIAO NORDESTE, CAPITAL BELEM\n" );
		break;
		
		case 15: printf ( "\nREGIAO NORDESTE, CAPITAL JOAO PESSOA\n" );
		break;
		
		case 16: printf ( "\nREGIAO SUL, CAPITAL CURITIBA\n" );
		break;
		
		case 17: printf ( "\nREGIAO NORDESTE, CAPITAL RECIFE\n" );
		break;
		
		case 18: printf ( "\nREGIAO NORDESTE, CAPITAL TERESINA\n" );
		break;
		
		case 19: printf ( "\nREGIAO SUDESTE, CAPITAL RIO DE JANEIRO\n" );
		break;
		
		case 20: printf ( "\nREGIAO NORTE, CAPITAL RIO GRANDE DO NORTE\n" );
		break;
		
		case 21: printf ( "\nREGIAO SUL, CAPITAL PORTO ALEGRE\n" );
		break;
		
		case 22: printf ( "\nREGIAO NORTE, CAPITAL PORTO VELHO\n" );
		break;
		
		case 23: printf ( "\nREGIAO NORTE, CAPITAL VBOA VISTA\n" );
		break;
		
		case 24: printf ( "\nREGIAO SUL, CAPITAL FLORIANÓPOLIS\n" );
		break;
		
		case 25: printf ( "\nREGIAO SUDESTE, CAPITAL SÃO PAULO\n" );
		break;
		
		case 26: printf ( "\nREGIAO NORDESTE, CAPITAL ARACAJU\n" );
		break;
		
		case 27: printf ( "\nREGIAO CENTRO-OESTE, CAPITAL PALMAS\n" );
		break;
		
		
getchar( );
	} 

	
	printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
	getchar ( ); 
	return ( EXIT_SUCCESS );
} 
/*
scanf("1","4","3","14","22","23","27");
printf("\nregiao norte\n");

scanf("8","13","19","25");
printf("\nregiao sudeste\n");

scanf("2","5","6","10","14","15","17","18","26");
printf("\nregiao nordeste\n");

system("pause\n");*/
