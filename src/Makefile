all: test

test:
	gcc -Wall -Wextra -Werror s21_string.c s21_string.h unit_testing.c -L. -lcheck -lm -o check_test.o
	chmod +x check_test
	./check_test

clean:
	rm -rf *.o


#//////////////////////////////////////////////////////////////

#all: s21_string.a test gcov_report
    
# test:
#     gcc test.c -ls21_string -L. -lcheck -lm -o check_unit_tests
#     chmod +x check_unit_tests
#     ./check_unit_tests  	
# s21_string.a: 
#     gcc -g -c -o libs21_string.o functions.c    
#     ar rcs libs21_string.a libs21_string.o
# gcov_report: 
#     gcc -Wall -Wextra -Werror -fprofile-arcs -ftest-coverage test.c -ls21_string -L. -lcheck -lm -o check_unit_tests
#     ./check_unit_tests
#     gcovr -r . --html --html-details -o coverage_report.html
# clean:
#    rm -rf *.gcno *.html *.css *.o *.a *.gcda check_unit_tests