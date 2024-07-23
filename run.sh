

#!/bin/bash

# Set the output directory and executable name
OUT_DIR="./bin"
EXECUTABLE="$OUT_DIR/text_rpg"

# Run the executable
if [ -f "$EXECUTABLE" ]; then
    $EXECUTABLE
else
    echo "Executable not found. Please build the project first."
fi