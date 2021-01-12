# The C compiler to use.
CC = gcc

# The C compiler flags to use.
# The -g flag is for adding debug information.
# The -Wall flag is to enable more warnings from the compiler
CFLAGS = -g -Wall

# The linker flags to use, none is okay.
LDFLAGS = 

# The libraries to link with.
LDLIBS = -lm

# Define the name of the executable you want to build.
EXEC = Determinant

# List the object files needed to create the executable above.
OBJECTS = Determinant.o

# Since this is the first rule, it's also the default rule to make
# when no target is specified. It depends only on the executable
# being built.
all: $(EXEC)

# This rule tells make that the executable being built depends on
# certain object files. This will link using $(LDFLAGS) and $(LDLIBS).
$(EXEC): $(OBJECTS)

# No rule needed for the object files. The implicit rules used
# make together with the variable defined above will make sure
# they are built with the expected flags.

# Target to clean up. Removes the executable and object files.
# This target is not really necessary but is common, and can be
# useful if special handling is needed or there are many targets
# to clean up.
clean:
	-rm -f *.o $(EXEC)

#Source: https://stackoverflow.com/questions/39623955/why-am-i-getting-the-error-undefined-reference-to-pow-collect2-error-ld-re


