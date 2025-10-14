CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = battle_game
SOURCES = main.cpp Player.cpp BattleGame.cpp GameInterface.cpp
HEADERS = Player.h BattleGame.h GameInterface.h
OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

main.o: main.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c main.cpp

Player.o: Player.cpp Player.h
	$(CXX) $(CXXFLAGS) -c Player.cpp

BattleGame.o: BattleGame.cpp BattleGame.h Player.h
	$(CXX) $(CXXFLAGS) -c BattleGame.cpp

GameInterface.o: GameInterface.cpp GameInterface.h BattleGame.h
	$(CXX) $(CXXFLAGS) -c GameInterface.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run