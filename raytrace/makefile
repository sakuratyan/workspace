
main:a.o coutfile.o
	g++ -o main a.o coutfile.o
a.o:a.c
	g++ -c a.c
coutfile.o:coutfile.h coutfile.c
	g++ -c coutfile.c		

clean:
	rm -f a.o coutfile.o \
	  main
