FLAGS = -Wall -Wextra -Werror -std=c++17
INCLUDES = -I..
LIBS = -L.. ../libftprintf.a -lgtest -lgtest_main -pthread

tests:
	g++ $(FLAGS) $(INCLUDES) -o specifiers test_specifiers.cpp $(LIBS)
	./specifiers

bonus-tests:
	g++ $(FLAGS) $(INCLUDES) -o flags test_flags.cpp $(LIBS)
	./flags

clean:
	rm -f specifiers flags

.PHONY: tests bonus-tests