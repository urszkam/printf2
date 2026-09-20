FLAGS = -Wall -Wextra -Werror -std=c++17
INCLUDES = -I..
LIBS = -L.. ../libftprintf.a -lgtest -lgtest_main -pthread

tests:
	@g++ $(FLAGS) $(INCLUDES) -o specifiers test_specifiers.cpp $(LIBS)
	@./specifiers
	@rm -f speciiers

bonus-tests:
	@g++ $(FLAGS) $(INCLUDES) -o flags test_flags.cpp $(LIBS)
	@./flags
	@rm -f flags

clean:
	@rm -f specifiers flags

.PHONY: tests bonus-tests