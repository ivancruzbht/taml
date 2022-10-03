#
# Tensorial make file
#
TARGET := taml

SRCDIR   = ./src
OBJDIR   = ./obj
BINDIR   = ./bin
LIBDIR   = ./lib

CC = g++
LINKER = g++
RM = rm -rf
INC = -I./include/ -I./include/Eigen/
CFLAGS =  -std=c++2a -g -Wall $(INC)
LFLAGS = -Wall $(INC) -L$(LIBDIR)/taco -lm -ltaco

SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

$(BINDIR)/$(TARGET).out: $(OBJECTS)
	@$(LINKER) $(OBJECTS) $(LFLAGS) -o $@
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!"

.PHONY: clean
clean:
	@$(RM) $(OBJECTS)
	@echo "Cleanup complete!"

.PHONY: remove
remove: clean
	@$(RM) $(BINDIR)/$(TARGET)
	@echo "Executable removed!"