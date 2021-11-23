
#IGNORETESTS= "ft_abs.c\|ft_inttodigit.c\|ft_pow.c" #TODO: make this work...
GREPIGNORE="ft_abs.c\|ft_strfill.c\|ft_inttodigit.c\|ft_pow.c\|\
ft_digitcount.c\|ft_firstdigits.c\|\
ft_printv3.c\|ft_normf.c\|ft_absf.c\|ft_normalize.c\|\
ft_v3magn.c\|ft_sqrt.c\|\
ft_sqrtf.c"
POINTERS=$(ls .. | grep -v "$GREPIGNORE" | grep ".c" |tr '\n' ' ' | sed 's/.$//g' | sed 's/ /,/g' | sed 's/ft_//g' | sed 's/\.c/_test/g')

COUNT=$(ls .. | grep -v "$GREPIGNORE" | grep ".c" | wc -l | sed 's/ //g')
STRINGS=$(echo "$POINTERS" | sed "s/^/\"/g" | sed "s/,/\",\"/g" | sed "s/$/\"/g")
STRINGS="char *func_names[FCOUNT] = {$STRINGS};"
FILENAME="main.c"
HEADER="includes/libfttests.h"
#MATCHINIT=".*func_ptrs\[.*\]\)\(\) = {.*"

echo "COUNT = $COUNT"
echo "STRINGS = $STRINGS"
FINAL="void (*func_ptrs[FCOUNT])() = {$POINTERS};"
echo $FINAL

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
	sed -i "s/# define FCOUNT .*/# define FCOUNT $COUNT/g" "$HEADER"
	sed -i "s/.*\(func_ptrs\[FCOUNT]\).* = .*/	$FINAL/g" "$FILENAME"
	sed -i "s/char \*func_names\[FCOUNT].*/$STRINGS/g" "$FILENAME"
else
	sed -i "" "s/# define FCOUNT .*/# define FCOUNT $COUNT/g" "$HEADER"
	sed -i "" "s/.*\(func_ptrs\[FCOUNT]\).* = .*/	$FINAL/g" "$FILENAME"
	sed -i "" "s/char \*func_names\[FCOUNT].*/$STRINGS/g" "$FILENAME"
fi
#TEST="Makefile"

#Find match for "SRCS=.*" and replace with empty
#sed -i "" "s/SRCS=.*//g" "$TEST"

#Hardcoded to write the VAR to the fifteenth line, struggled with sed syntax a bit so yeah..

#sed -i "" "15 i\\
#SRCS=$VAR " "$TEST"
