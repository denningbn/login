CC=g++

login: login.o
	$(CC) -g -o login login.o

login.o:
	$(CC) -c -g login.cpp

clean:
	rm *.o login
