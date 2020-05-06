#!/bin/bash
URL_PREFIX="https://github.com/grant-h/shannon_s5123/blob/master"

rm -f list.html
tree -I '*.md|*.html|*.sh' -H "$URL_PREFIX" > list.html

TREE_START=$(awk '/<h1>Directory Tree/{print NR}' list.html)
TREE_INFO=$(awk '/ directories,/{print NR, $1, $3}' list.html)

TREE_END=$(echo "$TREE_INFO" | cut -d " " -f 1)
TREE_DIRS=$(echo "$TREE_INFO" | cut -d " " -f 2)
TREE_FILES=$(echo "$TREE_INFO" | cut -d " " -f 3)

# MacOSX sed will not work for this
gsed -i -e 's#<br>##g' \
        -e 's#^\t##g' \
        -e "1,$(($TREE_START+1))d" \
        -e "$(($TREE_END-4)),$$d" \
        list.html

gsed -i -e '$a</pre>' \
        -e '1i<pre>' \
        list.html

EST_LOC=$(find * -type f -exec tail -1 {} \; | grep Line | awk '{ print $2 }' | cut -d: -f 1 | awk '{s+=$1} END {print s}')

echo "LOC $EST_LOC FILES $TREE_FILES, DIRS $TREE_DIRS"
