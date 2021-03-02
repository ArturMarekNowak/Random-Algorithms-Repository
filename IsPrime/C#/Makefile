.PHONY: clean, all

all: clean compile run

run: 
	./IsPrime.exe

compile:
	@mcs -reference:System.Numerics IsPrime.cs

clean:
	rm -f IsPrime.exe
