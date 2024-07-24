#!/bin/bash

# Compile the program (debug build, warning=error, strict, c++20)
# g++ -std=c++20 -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -o app app.cpp
# Less strict compile
g++ -std=c++20 -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -o app app.cpp


# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program..."
    # Run the program
    ./app
else
    echo "Compilation failed."
fi