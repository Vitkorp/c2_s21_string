test:
	gcc test_ondrewvi.c  s21_string.c s21_string.h  -Wall -o test -lcheck -pthread -lcheck_pic -pthread -lrt -lm -lsubunit

gcov_report: 
	gcc -Wall -Werror -Wextra test_ondrewvi.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck_pic -pthread -lrt -lm -lsubunit -o mid_html_res
	./mid_html_res
	gcovr -r . --html --html-details -o html_report


clean:
	rm test