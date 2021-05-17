#!/bin/bash

 ./ycsb -run -db redis -s -P workloads/workloada -p redis.hostport=10.0.0.51:21000 -p redis.cluster=true -p recordcount=1000000 -p operationcount=10000000 -p requestdistribution=zipfian -p threadcount=1
