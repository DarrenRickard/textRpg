#!/bin/bash

# Set the project directories
SRC_DIRS=("./src/Item" "./src/Entity/Player" "./src/Menu" "./src/Entity/Monster")
MAIN_SRC="app.cpp"
OUT_DIR="./bin"

# Create output directory if it doesn't exist
mkdir -p $OUT_DIR

# Set the output executable name
EXECUTABLE="$OUT_DIR/text_rpg"

# Set compiler and flags
CXX=g++
CXXFLAGS="-std=c++20 -ggdb -pedantic-errors -Wall -Weffc++ -Wextra"

# Collect all source files
CPP_FILES=($MAIN_SRC)
for dir in "${SRC_DIRS[@]}"; do
    for file in $dir/*.cpp; do
        CPP_FILES+=("$file")
    done
done

# Compile the source files into object files
OBJECT_FILES=()
for FILE in "${CPP_FILES[@]}"; do
    OBJ_FILE="$OUT_DIR/$(basename $FILE .cpp).o"
    $CXX $CXXFLAGS -c $FILE -o $OBJ_FILE
    OBJECT_FILES+=("$OBJ_FILE")
done

# Link object files to create the executable
$CXX ${OBJECT_FILES[@]} -o $EXECUTABLE

# Check if compilation and linking were successful
if [ $? -eq 0 ]; then
    echo "Build successful. Executable created at $EXECUTABLE"
else
    echo "Build failed."
fi
