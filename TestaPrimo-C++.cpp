
#include <cmath> 
#include <iostream> 
#include <vector> 
#define N 7 
using namespace std; 

vector<bool> ehPrimo(N, true); 


void checaPrimo() 
{ 
	for (int i = 2; i <= sqrt(N); ++i) { 
		if (ehPrimo[i]) { 
			for (int j = i * i; j <= N; j += i) { 
				ehPrimo[j] = false; 
			} 
		} 
	} 
} 

 
int main() 
{ 
	// Inicialize o clock para calcular
	clock_t inicializa, finaliza; 

	// inicializa clock 
	inicializa = clock(); 

	// funÃ§Ã£o para saber se o numero Ã© primo ou nÃ£o 
	checaPrimo(); 

	// termina o clock 
	finaliza = clock(); 

	// calcula a diferenÃ§a de tempo
	double time_taken 
		= double(finaliza - inicializa) 
		/ double(CLOCKS_PER_SEC); 

	// Mostra o tempo de execuÃ§Ã£o calculado
	cout << "Execution time: " << time_taken 
		<< " secs"; 

	return 0; 
} 