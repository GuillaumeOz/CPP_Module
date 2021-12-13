#!/bin/bash
# Date: 2021/10/21
# Description: tests the cpp06/ex00 project

mk_test() {
	echo "./convert" "$*"
	./convert $@
	echo "check output and press any key to continue"
	read -n1
	echo ""
}

if [ "$1" = "-v" ]; then
	verbose="true"
else
	verbose="false"
fi

echo "Make the project"
if ! make; then
	exit 1
fi
echo ""

echo "Start the tests:"
mk_test a

mk_test 1

mk_test 1.34f

mk_test 4.2

mk_test .256f

mk_test -.256f

mk_test 18.f

mk_test .

mk_test f

mk_test -

mk_test 0.

mk_test nan

mk_test nanf

mk_test +inf

mk_test -inff

mk_test inf

mk_test 642

mk_test 42

echo "bigger than FLOAT_MAX but smaller than DOUBLE_MAX"
mk_test 5000000000000000000000000000000000000000.0

mk_test x 0.3542 64 62.0f

mk_test bonjour

mk_test 18f

mk_test .f

mk_test -.f

mk_test 4.24.2

mk_test 0.256f12

mk_test
