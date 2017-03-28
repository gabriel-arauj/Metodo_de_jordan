#include <stdio.h>
#include <stdlib.h>
typedef struct {
	float **A, *B, *X; 
	int n;
}sis;

void Declara(sis* s){
	int i;
	(*s).A = (float** )malloc(sizeof(float)*(*s).n);
	(*s).B = (float** )malloc(sizeof(float)*(*s).n);
	(*s).X = (float** )malloc(sizeof(float)*(*s).n);
	for(i = 0; i < (*s).n; i++){
		(*s).A[i] = (float* )malloc(sizeof(float)*(*s).n);
	}
	return;
}




int main(){
	sis s;
	printf("Ordem: ");
	scanf("%d", &s.n);
	Declara(&s);
	insereMatriz(&s);
	
	return 0;
}