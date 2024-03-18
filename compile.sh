#!/bin/bash

# Find all C files recursively in subdirectories
find . -name '*.c' | while read file; do
    if [ -f "$file" ]; then
        filename=$(basename "$file" .c) # Extract filename without extension
        output_path=$(dirname "$file") # Extract directory name
        clang -o "${output_path}/${filename}" "$file" -lm
        if [ $? -eq 0 ]; then
            echo "Compilation successful for $file"
        else
            exit 1 # Exit the pipeline with a non-zero status code
        fi
    fi
done
