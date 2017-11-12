CC = gcc

TARGET=rrdtool
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:%.c=%.o)

CFLAGS+=$(shell pkg-config --cflags librrd)
LDFLAGS+=$(shell pkg-config --libs librrd)

all: $(TARGET) clean

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(SOURCES) $(LDFLAGS) $(LOADLIBES) $(LDLIBS)
	
clean:
	$(RM) $(OBJECTS)

