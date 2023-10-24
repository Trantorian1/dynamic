# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 14:08:48 by emcnab            #+#    #+#              #
#    Updated: 2023/10/24 23:08:18 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DOCKER   = docker run --rm -v .:/app trantorian/criterion:2.4.2.v
VALGRIND = valgrind --trace-children=yes --leak-check=full --show-leak-kinds=all
CORES    = $(($(nproc) + 1))

# **************************************************************************** #
#                               COMPILATIONS TASKS                             #
# **************************************************************************** #

all: debug

fclean: fclean_debug fclean_test fclean_final

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
	@make final

-include ./build/colors.mf



.PHONY: all fclean                                       \
	    debug clean_debug fclean_debug re_debug          \
	    test test_verbose clean_test fclean_test re_test \
	    final clean_final fclean_final re_final
