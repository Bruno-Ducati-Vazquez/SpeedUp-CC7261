import time
import math

def TestaPrimo(n):
    EhPrimo = 1
    d = 2

    if (n<=1):
        EhPrimo = 0
    
    while(EhPrimo == 1 & d <= n/2):
        if (n % d == 0):
            EhPrimo = 0
        d = d + 1
    
    return EhPrimo
    

numeroTeste = 664283 #numeroTeste  para ser testado
cpu_time_used = 0 #Tempo de execução
MediaTempo = 0 #Média do tempo de execução

for i in range(30):
    start_time = time.time()

    teste = TestaPrimo(numeroTeste)
    if (teste == 1):
        print("Número Primo\n")
    elif(teste == 0):
        print("Número não é primo\n")

    cpu_time_used = time.time() - start_time
    MediaTempo = MediaTempo + cpu_time_used
    #print(" %f ms" % ((time.time() - start_time)*1000))

MediaTempo = MediaTempo/30

print(f"Média {MediaTempo*1000:.2f} ms")