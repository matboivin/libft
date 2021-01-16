#!/bin/bash
#
# Quick local test for get_next_line

FILES_PATH="tests/files"
RESULTS_PATH="../results"
TEST_GNL="../../test_gnl"

echo -e "-------------------- MANDATORY PART ------------------------\n"

cd $FILES_PATH

for FILE in *; do
	echo -e "-------------------- TESTING $FILE ------------------------\n"
	./$TEST_GNL $FILE
done

echo -e "--------------------  TESTING ERROR CASE ------------------------\n"
./$TEST_GNL "boom"
