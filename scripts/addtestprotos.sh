#CAT="$(cat tests/*.c)"
FILE="includes/libfttests.h"
wildcard="tests/*.c"

PROTOS=$(cat $wildcard | grep 'test()' | sed 's/test.*/test\(\);\\/g')
echo "$PROTOS"

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
	echo "linux detected."
	sed -i "12,\$d" "$FILE"

	sed -i 's/.*printvalueint.*/void printvalueint(t_list *elem); \
/g' $FILE

	sed -i "12 i\\
$PROTOS
#endif" "$FILE"
else
	echo "something NOT linux detected, disgusting."
	sed -i "" "14,\$d" "$FILE"

	sed -i '' 's/.*printvalueint.*/void printvalueint(t_list *elem); \
/g' $FILE

	sed -i "" "14 i\\
$PROTOS
#endif" "$FILE"
fi
