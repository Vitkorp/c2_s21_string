test: 
	gcc test_ondrewvi.c  s21_string.c s21_string.h  -Wall -o test -lcheck -pthread -lcheck -pthread -lm 

gcov_report: 
	gcc -Wall -Werror -Wextra test_ondrewvi.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck -pthread  -lm  -o mid_html_res
	./mid_html_res
	gcovr -r . --html --html-details -o html_report


clean:
	rm mid_html_res *.gcda *.gcnomake *.html *.css html_report test

rebuild: clean test gcov_report