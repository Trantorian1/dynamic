# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 14:08:48 by emcnab            #+#    #+#              #
#    Updated: 2023/10/16 11:49:52 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CORES    = $(($(nproc) + 1))

# **************************************************************************** #
#                               COMPILATIONS TASKS                             #
# **************************************************************************** #

all: final

fclean: fclean_final

re: fclean
	make --silent all

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
	    final clean_final fclean_final re_final
