rebuild: clean test gcov_report

test: 
	OS="`uname`";  \
	if [ "$$OS" == "Darwin" ]; then gcc test_ondrewvi.c  s21_string.c s21_string.h  -Wall -o test -lcheck -pthread -lm | echo "case1";  \
	elif [ "$$OS" == "Linux" ]; then gcc test_ondrewvi.c  s21_string.c s21_string.h  -Wall -o test -lcheck_pic -pthread -lrt -lm -lsubunit | echo "case2"; \
	else echo "OS=$$OS"; \
	fi;


gcov_report: 
	OS="`uname`";  \
	if [ "$$OS" == "Darwin" ]; then gcc -Wall -Werror -Wextra test_ondrewvi.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck -pthread  -lm  -o mid_html_res; \
	./mid_html_res; \
	gcovr -r . --html --html-details -o html_report | echo "case1"; \
	elif [ "$$OS" == "Linux" ]; then gcc -Wall -Werror -Wextra test_ondrewvi.c s21_string.c -fprofile-arcs -ftest-coverage -pthread -lcheck_pic -pthread -lrt  -lm -lsubunit  -o mid_html_res;\
	./mid_html_res; \
	gcovr -r . --html --html-details -o html_report | echo "case2"; \
	else echo "OS=$$OS"; \
	fi;

clean:
	rm mid_html_res *.gcda *.gcnomake *.html *.css html_report test *.gcno

