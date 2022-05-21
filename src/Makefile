all: checkmk s21_archiver unit_tests_compiler lcov_report

checkmk:
	checkmk test.check > test.c

s21_archiver:
	gcc -c -g s21_string.c
	ar rcs libs21.a *.o
	ranlib libs21.a

unit_tests_compiler:
	gcc -Wall -Werror -Wextra test.c -L. -ls21 -lcheck -pthread -Icheck_pic -pthread -Irt -lm -Isubunit -o unit_tests

lcov_report:
	mkdir ne_ploho
	gcc -Wall -Werror -Wextra -fprofile-arcs -ftest-coverage test.c -ls21 -L. -lcheck -lm -o mid_html_res
	./mid_html_res
	geninfo *.gcda *.gcno -b . -o  ne_ploho/ploho
	genhtml ne_ploho/ploho -o ne_ploho/horosho
	
clean:
	rm -rf unit_tests *.o a.out *.a html_report *.css *.html mid_html_res *.gcda *.gcno horosho ploho ne_ploho report test.c

rebuild: clean all 

