#!/bin/bash

# Usage:
# ./wrapper.sh generate # To generate antlr4 stuf
# ./wrapper.sh compile  # To compile cpp stuff
# ./wrapper.sh execute  # To execute compiled stuff
#
# You can nest commands:
# ./wrapper.sh compile execute
# ./wrapper.sh generate compile execute
#
# You can use shorthands:
# ./wrapper.sh g       # Instead of "generate"
# ./wrapper.sh c       # Instead of "compile"
# ./wrapper.sh e       # Instead of "execute"
# ./wrapper.sh g c e   # Instead of "generate compile execute"

execInDocker(){
    docker run --rm -v "$(pwd)":/work eguerin/antlr4cpp bash -c "cd /work; $*"
}

for var in "$@"
do
    case "$var" in
        g | generate) execInDocker antlr4 -visitor -no-listener -Dlanguage=Cpp JSON.g4;;
        c | compile)  execInDocker clang++ -I /usr/include/antlr4-runtime -o exe *.cpp -lantlr4-runtime;;
        e | execute)  execInDocker ./exe;;
        *)            echo "Error: unknown argument '$var'"
    esac
done
