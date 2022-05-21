all: checkmk s21_string.a unit_tests_compiler gcovr_report

checkmk:
	checkmk test.check > test.c

s21_string.a:
	gcc -c -g s21_string.c
	ar rcs libs21_string.a *.o
	ranlib libs21_string.a

unit_tests_compiler:
	gcc -Wall -Werror -Wextra test.c -L. -ls21_string -lcheck -pthread -Icheck_pic -pthread -Irt -lm -Isubunit -o unit_tests

gcovr_report:
	gcc -Wall -Werror -Wextra test.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck  -lm  -o mid_html_res; \
	./mid_html_res; \
	gcovr -r . --html --html-details -o html_report

clean:
	rm -rf unit_tests *.o *.a html_report *.css *.html mid_html_res *.gcda *.gcno test.c

rebuild: clean all 

spec:
	gcc -Wall -Werror -Wextra specif.c
