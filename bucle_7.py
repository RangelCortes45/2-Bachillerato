def bucle_rocho():
    print "EL CONSTRUCTOR DE PIRAMIDEITOR"
    print " �HASTA QU� PUTA ALTURA QUIERES LA PIR�MIDE?"
    altura=input("altura= ")
    for fil in range(1,altura+1):
        for col in range(1,fil+1):
            print "*",
        print " "

bucle_rocho()
