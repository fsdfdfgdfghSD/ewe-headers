# TODO: Write windows version.

SRC_DIR := ./include
DEST_DIR := /usr/include/ewe

all: move_files

move_files:
	@mkdir -p $(DEST_DIR)
	
	@for file in $(SRC_DIR)/*; do \
	if [ -f $$file ]; then \
			cp --backup $$file $(DEST_DIR); \
		fi \
	done

# Optional: Clean up the destination directory (if needed)
clean:
	@rm -rf $(DEST_DIR)