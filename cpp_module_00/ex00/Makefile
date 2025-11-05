CXX = c++

CXXFLAGS = -Wall -Wextra -std=c++98

TARGET = megaphone

SRC = megaphone.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

re: clean all