int maior = vet[0];
int* vetCount = new int[tam];


for(i = 1; i < n; i++){
	if(vet[]){
	}
}

int tam = maior + 1;

for(int i = 0; i < tam; i++){
	vetCount[i] = 0;
}

for(i = 0; i < n; i++){
	vetCount[vet[i]]++;
}

for(i = n - 1, j = tam - 1; i >= 0; j--){
	for(x = vetCount[j]; x > 0;){
		vet[i] = j;
		vetCount[j]--;
		i--;
	}
}