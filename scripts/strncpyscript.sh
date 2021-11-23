for i in {1..100}; do ./testprog strncpy noleaks | grep -A 20 "DIFF" >> DIFFS_STRN; done
