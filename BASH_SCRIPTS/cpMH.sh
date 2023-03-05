#!/bin/bash

files=(
    "main.h"
    "holberton.h"
    "*.h"
)

for file in "${files[@]}"
do
    file_path=$(find .. -type f -name "$file" -print -quit)

    if [[ -n "$file_path" ]]; then
        cp "$file_path" .
        echo "Copied $file to the current directory"
    else
        echo "Could not find $file"
    fi
done
