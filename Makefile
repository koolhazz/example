.PHONY: clean All

All:
	@echo "----------Building project:[ list_invert - Debug ]----------"
	@cd "list_invert" && "$(MAKE)" -f  "list_invert.mk"
clean:
	@echo "----------Cleaning project:[ list_invert - Debug ]----------"
	@cd "list_invert" && "$(MAKE)" -f  "list_invert.mk" clean
