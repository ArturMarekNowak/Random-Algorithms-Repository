.PHONY: clean, all

all: clean compile run

run: 
	./Factorial.exe

compile:
	@mcs -reference:System.Numerics Factorial.cs

clean:
	rm -f Factorial.exe
