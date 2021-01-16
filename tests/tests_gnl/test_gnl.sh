#!/bin/bash
#
# Test suite for get_next_line

FILES_PATH="tests/files"
RESULTS_PATH="../results"
TEST_GNL="../../test_gnl"
TMP_FILE="../tmp.txt"
DIFF_FILE="../diff.txt"

if [ -f "tests/diff.txt" ]; then
	rm "tests/diff.txt"
fi

echo -e "-------------------- MANDATORY PART ------------------------\n"

cd $FILES_PATH

for FILE in *; do
	echo -e "-------------------- TESTING $FILE ------------------------\n"
	echo -e "-------------------- TESTING $FILE ------------------------\n\n" >> $DIFF_FILE
	./$TEST_GNL $FILE
	./$TEST_GNL $FILE >> $TMP_FILE
	if diff $RESULTS_PATH/result_$FILE $TMP_FILE >> $DIFF_FILE; then
		echo -e "Diff OK\n"
		echo -e "Diff OK\n" >> $DIFF_FILE
	else
		echo -e "Diff KO :(\n"
		echo -e "Diff KO :(\n" >> $DIFF_FILE
	fi
	rm $TMP_FILE
done

echo -e "--------------------  TESTING ERROR CASE ------------------------\n"
echo -e "--------------------  TESTING ERROR CASE ------------------------\n\n" >> $DIFF_FILE
./$TEST_GNL "boom"
./$TEST_GNL "boom" >> $TMP_FILE
if diff $RESULTS_PATH/result_error.txt $TMP_FILE >> $DIFF_FILE; then
	echo -e "Diff OK\n"
	echo -e "Diff OK\n" >> $DIFF_FILE
else
	echo -e "Diff KO :(\n"
	echo -e "Diff KO :(\n" >> $DIFF_FILE
fi
rm $TMP_FILE

if grep -q "Diff KO :(" $DIFF_FILE; then
	echo -e "\nCheck diff.txt for more informations\n"
	echo -e "\n-------------------- END OF TEST SESSION ------------------------\n"
	exit 1
else
	rm $DIFF_FILE
	echo -e "\nEverything went well! :D\n"
	echo -e "\n-------------------- END OF TEST SESSION ------------------------\n"
	exit 0
fi
