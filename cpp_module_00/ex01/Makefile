CXX = c++

CXXFLAGS = -Wall -Wextra -std=c++98

TARGET = phonebook

SRC = phonebook.cpp \
phonebook_utils.cpp \

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

re: clean all