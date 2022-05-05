all: s21_2_9_10

checkmk:
	checkmk s21_2_9_10.check > test.c

s21_2_9_10:
	gcc -Wall -Werror -Wextra *.c -lcheck -pthread -Icheck_pic -pthread -Irt -lm -Isubunit

clean:
	rm -rf a.out

rebuild: clean all 
