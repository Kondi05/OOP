# Makefile for Workshop 11 - OOP C++

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Targets for each part
all: part1 part2 part3

# Part 1: Browser History
part1:
	$(CXX) $(CXXFLAGS) -o part1/browser_test part1/main-1.cpp part1/BrowserHistory.cpp

# Part 2: Grade Manager  
part2:
	$(CXX) $(CXXFLAGS) -o part2/grade_test part2/main-2.cpp part2/GradeManager.cpp

# Part 3: Record Manager
part3:
	$(CXX) $(CXXFLAGS) -o part3/record_test part3/main-3.cpp part3/RecordManager.cpp

# Clean up compiled files
clean:
	rm -f part1/browser_test part2/grade_test part3/record_test

# Test targets (for Gradescope)
test1:
	$(CXX) $(CXXFLAGS) -o test1 part1/BrowserHistory.cpp test-1-1.cpp

test2:
	$(CXX) $(CXXFLAGS) -o test2 part2/GradeManager.cpp test-2-1.cpp

test3:
	$(CXX) $(CXXFLAGS) -o test3 part3/RecordManager.cpp test-3-1.cpp

.PHONY: all part1 part2 part3 clean test1 test2 test3