.PHONY: clean, all

all: clean compile run

run: 
	./PiNumber.exe

compile:
	@mcs -reference:System.Numerics PiNumber.cs

clean:
	rm -f PiNumber.exe
