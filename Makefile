# Compiler and settings
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Isrc -I/opt/homebrew/include/ImageMagick-7 \
           -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=16
LDFLAGS = -L/opt/homebrew/lib -lMagick++-7.Q16HDRI

# Directories
SRC_DIR = src
BIN_DIR = bin
RSRC_DIR = rsrc

# Files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
TARGET = $(BIN_DIR)/ascii_art

# Default build
all: $(TARGET)

# Build rule
$(TARGET): $(SRCS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)

# Clean up
clean:
	rm -f $(TARGET)
