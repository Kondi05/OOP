# Makefile for Unit Testing Workshop

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Executable name
TARGET = test_runner

# Source files (without headers)
SRCS = main.cpp Invoice.cpp

# Default target - build and run tests
all: $(TARGET)
	./$(TARGET)

# Build the executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up - remove executable
clean:
	rm -f $(TARGET)

# Help target
help:
	@echo "Available commands:"
	@echo "  make all     - Build and run all tests (default)"
	@echo "  make build   - Build the executable only"
	@echo "  make clean   - Remove the executable"
	@echo "  make help    - Show this help message"

# Alias for building without running
build: $(TARGET)

.PHONY: all clean help build