# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    compile.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleste-l <fleste-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/30 14:23:14 by fleste-l          #+#    #+#              #
#    Updated: 2018/04/05 13:06:27 by fleste-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/sh

#make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -g3 -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -g3 -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
#gcc -Wall -Wextra -Werror -g3 -fsanitize=address -I libft/includes -L libft/ -lft -o test_gnl main.c get_next_line.c
