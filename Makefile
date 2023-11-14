# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 14:08:48 by emcnab            #+#    #+#              #
#    Updated: 2023/11/14 16:50:31 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DOCKER   = docker run --rm -v .:/app trantorian/criterion:2.4.2.v
VALGRIND = valgrind --trace-children=yes --leak-check=full --show-leak-kinds=all
CORES    = $(($(nproc) + 1))

# **************************************************************************** #
#                               COMPILATIONS TASKS                             #
# **************************************************************************** #

all: final

clean: clean_final

fclean: fclean_final

re: re_final

# **************************************************************************** #
#                                   FINAL TASK                                 #
# **************************************************************************** #

final:
	@echo "$(BOLD)$(BLUE)[ Building in Final Mode ]$(RESET)"
	@make -j$(CORES) --silent --file=./build/build_final.mf

clean_final:
	@echo "$(BOLD)$(BLUE)[ Removing all Final objects ]$(RESET)"
	@make clean --silent --file=./build/build_final.mf

fclean_final:
	@echo "$(BOLD)$(BLUE)[ Removing all Final files ]$(RESET)"
	@make fclean --silent --file=./build/build_final.mf

re_final:
	@echo "$(BOLD)$(BLUE)[ Rebuilding Final binary ]$(RESET)"
	@make fclean --silent --file=./build/build_final.mf
	@make --silent final

-include ./build/colors.mf



.PHONY: all clean fclean re                     \
	    final clean_final fclean_final re_final
