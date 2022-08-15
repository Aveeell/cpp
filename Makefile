SRC_DIR = $(wildcard */.)

all re clean fclean:
	@for dir in $(SRC_DIR); do \
		$(MAKE) -j 8 $(MAKECMDGOALS) -C $$dir; \
	done