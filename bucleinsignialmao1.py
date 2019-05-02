def bucle_insignialmao1():
    print "PARES O IMPARES"
    print "¿Hasta que numero deseas contar?"
    nfinal=input("numero = ")
    #Definimos una variable para contar los pares (CONTADORA)
    numero_pares=0 #inicializamos la variable a cero
    #Definimos una variable para contar los impares
    numero_impares=0 #inicializamos la variable a cero
    for numero in range(1,nfinal+1):
        if(numero%2==0):
            print str(numero),"PAR"
            numero_pares=numero_pares+1
        else:
            print str(numero),"IMPAR"
            numero_impares=numero_impares+1
    print "He contado",numero_pares, "numeros pares"
    print "He contado",numero_impares, "numeros impares"

bucle_insignialmao1()
