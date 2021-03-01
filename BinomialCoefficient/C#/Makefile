.PHONY: clean, all

all: clean compile run

run: 
	./BinomialCoefficient.exe

compile:
	@mcs -reference:System.Numerics BinomialCoefficient.cs

clean:
	rm -f BinomialCoefficient.exe
