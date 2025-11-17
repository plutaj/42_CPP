CXX = c++

CXXFLAGS = -Wall -Wextra -std=c++98

TARGET = phonebook

SRC = main_utils.cpp \
main.cpp \
PhoneBook.cpp \
Contact.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

re: clean all