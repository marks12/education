#!/bin/bash

gcc -no-pie sampleasm.s -o hello-asm
go build -o golang-sample ./s.go
g++ ./Sample014.cpp -o ./sample
./sample
