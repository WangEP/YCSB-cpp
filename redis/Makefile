CC=g++
CFLAGS+=-Wall -std=c++11 -g -ggdb 
LDFLAGS=-lhiredis -lpthread
SOURCES+=$(wildcard ../core/*.cc)
SOURCES+=$(./*.cc)
SOURCES+=$(./*.h)
OBJECTS+=$(SOURCES:.cc=.o)
DEPS+=$(SOURCES:.cc=.d)

all: sample
sample:	sample.cc 
	$(CC) -o $@ $^ ./hiredis-cluster/build/libhiredis_cluster.a  $(CFLAGS) $(LDFLAGS) 

clean:
	$(RM) sample
	# $(MAKE) -C ./hiredis clean
