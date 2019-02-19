CC=gcc
CFLAGS=-Wall
DEPS=liblinkedlists.h
SRC=hellolinkedlists.c liblinkedlists.c

hellolinkedlists: $(DEPS) $(SRC)
	$(CC) -o hellolinkedlists $(CFLAGS) $(DEPS) $(SRC)