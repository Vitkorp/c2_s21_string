all: checkmk s21_archiver unit_tests_compiler gcovr_report

checkmk:
	checkmk test.check > test.c

s21_archiver:
	gcc -c -g test.c
	ar rcs libs21.a *.o
	ranlib libs21.a

unit_tests_compiler:
	gcc -Wall -Werror -Wextra test.c -L. -ls21 -lcheck -pthread -Icheck_pic -pthread -Irt -lm -Isubunit -o unit_tests

gcovr_report:
	gcc -Wall -Werror -Wextra -fprofile-arcs -ftest-coverage test.c -ls21 -L. -lcheck -lm -o mid_html_res
	./mid_html_res
	gcovr -r . --html --html-details -o html_report

clean:
	rm -rf unit_tests *.o *.a html_report *.css *.html mid_html_res *.gcda *.gcno test.c

rebuild: clean all 

spec:
	gcc -Wall -Werror -Wextra specif.c
