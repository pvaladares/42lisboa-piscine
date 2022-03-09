#!/bin/sh
#
# For testing purposes see below vars already set for Examples 1 and 2, remove # as necessary to test each case
# Example 1
# export FT_NBR1=\\\'\?\"\\\"\'\\
# export FT_NBR2=rcrdmddd
# Example 2
# export FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
# export FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
#
echo $FT_NBR1 + $FT_NBR2 | tr "\'" "0" | tr '\\\"\?\!' "1234" | tr "mrdoc" "01234" | xargs echo "obase=13;ibase=5;" | bc | tr "0123456789ABC" "gtaio luSnemf"
#
# Explanation:
# shell path (1st line, tells OS which interpreter to use to run this .sh)
# echo variables previsouly set by the evaluator env (see instructions above)
# replace first string by the corresponding base5 {'\"?!} = {01234}, use \' with double ", use \" with double '
# replace second string by the corresponding base5 {mrdoc} = {01234}
# conversion of number from input base 'ibase' to output base 'obase'
# finally replace the output string by the corresponding base13 {gtaio luSnemf} = {0123456789}
