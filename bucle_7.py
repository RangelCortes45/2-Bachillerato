def bucle_rocho():
    print "EL CONSTRUCTOR DE PIRAMIDEITOR"
    print " ¿HASTA QUÉ PUTA ALTURA QUIERES LA PIRÁMIDE?"
    altura=input("altura= ")
    for fil in range(1,altura+1):
        for col in range(1,fil+1):
            print "*",
        print " "

bucle_rocho()
