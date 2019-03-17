CC=g++
CFLAGS=-W -Wall
LDFLAGS=
EXEC=main
SRC= $(wildcard *.cpp) $(wildcard lib/*.cpp)
HFILE= $(wildcard lib/*.h)
OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

main: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

main.o: $(HFILE)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf *.o
mrproper: clean
	rm -rf $(EXEC)