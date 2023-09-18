CXX = g++

CXXFLAGS = -g -Wall

TARGET = nli

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CXX) $() -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
