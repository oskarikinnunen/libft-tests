VAR=$(ls tests | tr '\n' ' ' | sed 's/.$//g' | sed 's/^/ /g' |sed "s, , tests/,g")
TEST="test.mk"

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
sed -i "s/TESTS=.*//g" "$TEST"
sed -i "18 i\\
TESTS=$VAR " "$TEST"
else
#Find match for "SRCS=.*" and replace with empty
sed -i "" "s/TESTS=.*//g" "$TEST"
#Hardcoded to write the VAR to the nth line, struggled with sed syntax a bit so yeah..
sed -i "" "18 i\\
TESTS=$VAR " "$TEST"
fi
