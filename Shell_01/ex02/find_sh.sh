#!/bin/sh
find . -type f -name "*.sh"  | sed 's/\.sh$//' | xargs -n 1 basename
# Sample test:
# touch find_sh.sh file1.sh file2.sh
# mkdir subdir.sh
# mkdir sub
# touch file3.sh
# ./find_sh.sh
