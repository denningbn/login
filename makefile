CC=g++

login: login.o
	$(CC) -o login login.o

clean:
	rm *.o login
