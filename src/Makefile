
all: checkmk s21_string.a test gcov_report

rebuild: clean all

clean:
	rm mid_html_res *.gcda *.gcnomake *.html *.css html_report test *.gcno; \
	rm -rf ./ne_ploho/horosho/*; \
	rm -rf ./ne_ploho/*; \
	rm -rf ./ne_ploho; \
	rm a.out; \
	rm -rf ./*.o ./*.a ./*.out


checkmk:
	checkmk test.check > test.c

unit_tests_compiler:
	gcc -Wall -Werror -Wextra test.c -L. -ls21_string -lcheck -pthread -Icheck_pic -pthread -Irt -lm -Isubunit -o unit_tests

test: 
	gcc -Wall -Werror -Wextra test.c -L. -ls21_string -o test.out -lcheck -pthread -lm

test_linux: 
	gcc -Wall -Wextra -Werror test.c -L. -ls21_string -o test -lcheck_pic -pthread -lrt -lm -lsubunit -o unit_tests
	./unit_tests

s21_string.a:
	gcc -c -g s21_string.c
	ar rcs libs21_string.a *.o
	ranlib libs21_string.a

gcov_report: 
	gcc -Wall -Werror -Wextra test.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck  -lm  -o mid_html_res; \
	./mid_html_res; \
	gcovr -r . --html --html-details -o html_report

gcov_linux:
	gcc -Wall -Werror -Wextra test.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck_pic -lrt  -lm -lsubunit  -o mid_html_res;\
	./mid_html_res; \

clean:
	rm -rf unit_tests *.o *.a html_report *.css *.html mid_html_res *.gcda *.gcno test.c


lcov: 
	mkdir ne_ploho; \
	gcc -Wall -Werror -Wextra test.c s21_string.c -fprofile-arcs -ftest-coverage -lcheck -pthread  -lm  -o mid_html_res; \
	./mid_html_res; \
	geninfo *.gcda *.gcno -b . -o  ne_ploho/ploho; \
	genhtml ne_ploho/ploho -o ne_ploho/horosho

lcov_linux: 
	mkdir ne_ploho; \
	gcc -Wall -Werror -Wextra test.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck_pic -pthread -lrt  -lm -lsubunit  -o mid_html_res;\
	./mid_html_res; \
	geninfo *.gcda *.gcno -b . -o  ne_ploho/ploho; \
	genhtml ne_ploho/ploho -o ne_ploho/horosho 


lcov_report:
	mkdir ne_ploho
	gcc -Wall -Werror -Wextra -fprofile-arcs -ftest-coverage test.c -ls21 -L. -lcheck -lm -o mid_html_res
	./mid_html_res
	geninfo *.gcda *.gcno -b . -o  ne_ploho/ploho
	genhtml ne_ploho/ploho -o ne_ploho/horosho
	open ne_ploho/horosho/index.html


