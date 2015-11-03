.PHONY: clean All

All:
	@echo "----------Building project:[ sscanf - Debug ]----------"
	@cd "sscanf" && "$(MAKE)" -f  "sscanf.mk"
clean:
	@echo "----------Cleaning project:[ sscanf - Debug ]----------"
	@cd "sscanf" && "$(MAKE)" -f  "sscanf.mk" clean
