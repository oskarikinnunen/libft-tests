#"NORMAL" TESTS
./testprog | grep "running\|found\|DIFF\|diff\|SEED\|LEAK" --line-buffered | tee results/DIFFS
echo "DIFFS PHASE COMPLETE"
./testprog | grep -A 20 "DIFF" --line-buffered | tee results/DIFFS_DETAILED
echo "DIFFS_DETAILED PHASE COMPLETE"
./testprog | grep "running\|leaked" --line-buffered | tee results/LEAKS
echo "LEAKS PHASE COMPLETE"

#PUTS
./testprog putstr_test noleaks | grep -v "SEED" | ./testputs putstr | grep -a "passed" | tee results/PUTS

./testprog putchar_test noleaks | ./testputs putchar | grep -a "passed" | tee -a results/PUTS

./testprog putnbr_test noleaks | ./testputs putnbr | grep -a "passed" | tee -a results/PUTS
echo "PUTS PHASE COMPLETE"