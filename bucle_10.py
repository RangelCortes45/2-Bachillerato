def bucle_TENedor():
    #suma de números pares e impares
    nfinal= input("A ver capullo, hasta que número de mierda tengo que contar esta vez")
    for numero in range(1,nfinal+1):
        #para cada número me pregunto si es par o impar
        if(numero%2==0):
            print str(numero), "es puto par"
        else:
            print str(numero), "es impar, subnormal"
            
bucle_TENedor()
