// TP2 - AEDs II

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//________________________________________________________________________________________________________

void criar_vetor(int *vetor, int *tamanho);
void alterar_tamanho(int *vetor, int *t);
void preencher(int *vetor, int *tamanho, int valor_max);

void ordenar(int *v, int *t);
void selection(int *v, int *t);
void insertion(int *v, int *t);

void mostrar_vetor(int *v, int *t);

void menu();


//_________________________________________________________________________________________________________

void criar_vetor(int *vetor, int *tamanho){
	if (vetor != NULL){
		printf("Já existe um vetor para ser utilizado.\n");
		return;
	}
	vetor = (int*)malloc(tamanho*4);
}

void alterar_tamanho(int *vetor, int *tamanho){
	int novo_t;
	if (vetor == NULL){
		printf("Vetor não inicializado.\n");
		return;
	}
	printf("Digite o novo tamanho do vetor\n");;
	scanf("%d", &novo_t);
	vetor = (int*)realloc(novo_t*4);
	*tamanho = novo_t;
	return;
}

void preencher(int *vetor, int *tamanho){
	if(vetor == NULL){
		printf("Vetor não inicializado\n");
		return;
	}
	int i;
	srand(NULL);
	for (i = 0; i < tamanho; i++){
		v[i] = rand()% valor_max+1;
	}
}

void ordenar(int v*, int *t){
	int opt;
	printf(" 1. Selection Sort\n 2. Insertion Sort\n 3. ShellSort\n 4. QuickSort\n 5. HeapSort \n 6. MergeSort\n 7. voltar ☼>");
	scanf("%d", &opt);

	switch(opt){
		case 1:
			selection(v, t);
			menu (v, t);

		case 2:
			insertion(v, t);
			menu(v, t);

		case 3:

		case 4:

		case 5:

		case 6:

		case 7:
			menu(v, t);

	}
}
void selection(int *v, int *t){			// Um vetor e seu tamanho como parâmetros
	int i, j, aux;
	int min;
	for (i = 0; i < t-1; i++){
		min = i;
		for(j=i+1; j < t; j++){
			if (v[j] < v[i]){
				min = j;
			}
		}
		if (v[min] != v[i]){
			aux = v[i];
			v[i] = v[min];
			v[min] = aux;
		}
	}
}

void insertion(){

}


void mostrar_vetor(int *v, int *t){
	int i;
	for (i = 0; i < t; i++){
		printf(" %d ", v[i]);
	}
	printf("\n");
	return;
}

void menu(int v*, int *t){
	int opt;
	printf(" • Menu ±\n 1. Inicializar vetor\n 2. Preencher vetor\n 3. Ordenar\n 4. Sair\n");
	scanf("%d", &opt);
	switch(opt){
		case 1:
			printf("Tamanho: \n");
			scanf("%d", t);
			criar_vetor(v, t);
			menu(v, t);

		case 2:
			printf("Digite\n");
			preencher(v, t);
			menu(v, t);

		case 3:
	
		case 4:
			exit(1);
	}

}

//_______________________________________________________________________________________________________

int main(){
	int *v = NULL;
	int t;

	menu (v, &t);
}