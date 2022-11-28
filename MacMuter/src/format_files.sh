#!/bin/bash
#exec &>~/log.txt
#echo $PATH
#find -E . -regex '.*\.(cpp|h|m|mm)' | xargs echo
find -E . -regex '.*\.(cpp|h|m|mm)' | xargs /usr/local/bin/clang-format -i
#open -a TextEdit ~/log.txt
