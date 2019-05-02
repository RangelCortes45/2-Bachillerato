def bucle_rocho():
    print "EL CONSTRUCTOR DE CUADRADEITOR"
    print " ¿HASTA QUÉ PUTA ALTURA QUIERES EL CUADRADO?"
    altura=input("altura= ")
    for fil in range(1,altura+1):
        for col in range(1,altura-fil+1):
            print "*",
        print " "

bucle_rocho()
