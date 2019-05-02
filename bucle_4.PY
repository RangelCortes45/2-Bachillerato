def bucle_4():
    for i in range(1,101):
        if(i%2==0):
            print str(i)+", par, capullo.",
                
        else:
            print str(i)+", impar, capullo.",
            
        if(i%3==0):
            print str(i)+", además es mutiplo de 3, subnormal"
        print "\n"

bucle_4()
