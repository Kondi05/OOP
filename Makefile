# Makefile for Unit Testing Workshop

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Executable name
TARGET = test_runner

# Source files (ADD Addition.cpp here!)
SRCS = main.cpp Invoice.cpp Addition.cpp

# Default target - build and run tests
all: $(TARGET)
	./$(TARGET)

# Build the executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up - remove executable
clean:
	rm -f $(TARGET)

.PHONY: all clean