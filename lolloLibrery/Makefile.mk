#variabili carine
FILENAME=main
LIBRERIA=stack
LIBRERIADUE=pollo
#generazione dell'eseguibile dato i tre .o
$(FILENAME): $(FILENAME).o $(LIBRERIA).o $(LIBRERIADUE).o
#come si chiamera l'eseguibile    #i .o che vuole
	gcc -o $(FILENAME) $(FILENAME).o $(LIBRERIA).o $(LIBRERIADUE).o

#generazione dei tre .o
$(FILENAME).o: $(FILENAME).c $(LIBRERIA).h $(LIBRERIADUE).h
	gcc -c -g $(FILENAME).c
$(LIBRERIA).o: $(LIBRERIA).c $(LIBRERIA).h 
	gcc -c -g $(LIBRERIA).c
$(LIBRERIADUE).o: $(LIBRERIADUE).c $(LIBRERIADUE).h 
	gcc -c -g $(LIBRERIADUE).c
