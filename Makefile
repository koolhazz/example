.PHONY: clean All

All:
	@echo "----------Building project:[ array_poiner - Debug ]----------"
	@cd "array_poiner" && "$(MAKE)" -f  "array_poiner.mk"
clean:
	@echo "----------Cleaning project:[ array_poiner - Debug ]----------"
	@cd "array_poiner" && "$(MAKE)" -f  "array_poiner.mk" clean
