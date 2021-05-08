CC=g++
CFLAGS+=-Wall -std=c++11 -g -ggdb
LDFLAGS=-lhiredis

all: hiredis sample

sample:	sample.cc 
	$(CC) -o $@ $^ ./hiredis-cluster/build/libhiredis_cluster.a  $(CFLAGS) $(LDFLAGS) 

clean:
	$(RM) sample
	# $(MAKE) -C ./hiredis clean
