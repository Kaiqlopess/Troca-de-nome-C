#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[100];
    char nomei[100];
    int i, x, d;

    printf("Como e seu nome commpleto: ");
	fgets(nome, sizeof(nome), stdin);

    d = 0;
    x = strlen(nome);

	nome[strlen(nome) - 1] = '\0';


    for(i = x - 1; i >= 0; i--) {
        if(nome[i] == ' ') {
            d = i;
            for(i = 0; i < x; i++){
			  	if(i > d){
			  	  nomei[i] = nome[i];
			  	  printf("%c", nomei[i]);
				}
		    }
		    printf(" ");
			x = d;
        }
    }
    for(i = 0; i < x; i++){
      while(nome[i] != ' '){
       printf("%c", nome[i]);

       break;
      }
	}



    return 0;
 }
