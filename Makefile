.PHONY: clean All

All:
	@echo "----------Building project:[ include_find - Debug ]----------"
	@cd "include_find" && "$(MAKE)" -f  "include_find.mk"
clean:
	@echo "----------Cleaning project:[ include_find - Debug ]----------"
	@cd "include_find" && "$(MAKE)" -f  "include_find.mk" clean
