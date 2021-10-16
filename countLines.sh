#!/bin/bash

# Usage
# 
#

countLines=`find . -name "*.cpp" -or -name "*.h"|xargs cat|grep ^[0-9]|sed s/-/" - "/ | sed s/$/" +"/ | tr '\n' ' '| sed s/$/"0"/ | xargs expr | sed s/$/" * -1"/ | xargs expr`

echo "$countLines lines have been finished."
percent=`bc<<<"$countLines/283501.0"`
echo "The progress percentage is $percent"
