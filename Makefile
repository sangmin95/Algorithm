.SUFFIXES : .c .o
.SUFFIXES : .cpp .o

CC = /usr/bin/gcc
CFLAGS = -g -ggdb -W -Wall
CPP = /usr/bin/g++

SRC = 5622.cpp
OBJ = $(addsuffix .o, $(basename $(SRC)))
TARGET = $(basename $(SRC))

all: $(TARGET)

$(TARGET) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^

.c .o :
	$(CC) $(INCDIR) $<
#.o보다 더 최근에 만들어진 .c 파일은 갱신
# $(INCDIR)이 -c 인것같다.

.cpp .o :
	$(CPP) $(INCDIR) $<

clean:
	rm -rf $(OBJ) $(TARGET) core
