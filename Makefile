.PHONY: clean All

All:
	@echo "----------Building project:[ int_compare - Debug ]----------"
	@cd "int_compare" && "$(MAKE)" -f  "int_compare.mk"
clean:
	@echo "----------Cleaning project:[ int_compare - Debug ]----------"
	@cd "int_compare" && "$(MAKE)" -f  "int_compare.mk" clean
