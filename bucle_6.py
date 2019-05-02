def bucle_6():
    n_table=input("a ver capullo, que tabla te tengo que decir?")
    for n_table in range(1,11):
        print "LA PUTA TABLA DEL " + n_table
        for i in range(1,11):
            print n_table," X ", i, " = ",n_table*i 
    
bucle_6()
