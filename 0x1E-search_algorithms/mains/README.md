# main files
used for compilation with the header file and function ifles in the parent directory

compilation lines:

0: gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear

1: gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary

100: gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -lm -o 100-jump

102: gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-interpolation.c -o 102-interpolation

103: gcc -Wall -Wextra -Werror -pedantic 103-main.c 103-exponential.c -o 103-exponential

104: gcc -Wall -Wextra -Werror -pedantic 104-main.c 104-advanced_binary.c -o 104-advanced_binary
                                                                            
105: gcc -Wall -Wextra -Werror -pedantic 105-main.c 105-jump_list.c listint/\*.c -lm -o 105-jump
									       
106: gcc -Wall -Wextra -Werror -pedantic 106-main.c 106-linear_skip.c skiplist/\*.c -lm -o 106-linear
