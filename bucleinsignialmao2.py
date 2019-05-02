def bucle_insignialmao2():
    print "SUMA PARES O IMPARES"
    print "¿Hasta que numero deseas sumar?"
    nfinal=input("numero = ")
    #Definimos una variable para contar los pares (ACUMULADORA)
    suma_pares=0 #inicializamos la variable a cero
    #Definimos una variable para contar los impares
    suma_impares=0 #inicializamos la variable a cero
    for numero in range(1,nfinal+1):
        if(numero%2==0):
            print str(numero),"PAR"
            suma_pares=suma_pares+numero
        else:
            print str(numero),"IMPAR"
            suma_impares=suma_impares+numero
    print "La suma de numeros pares vale",suma_pares, "en total"
    print "La suma de numeros impares vale",suma_impares, "en total"

bucle_insignialmao2()
