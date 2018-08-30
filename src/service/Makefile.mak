CC=gcc

TARGET=service  
SRC = Service.cpp \
	./Client/Clietn.cpp \
	./server/server.cpp \
	./test/test.cpp
	

INC = -I./svcclient -I./svcserver -I./Service

OBJS = $(SRCS:.c=.o)

$(TARGET):$(OBJS)
[tab]$(CC) -o $@ $^

clean:
[tab]rm -rf $(TARGET) $(OBJS)

%.o:%.c

[tab]$(CC) $(CFLAGS) $(INC) -o $@ -c $<