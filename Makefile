.PHONY: clean All

All:
	@echo "----------Building project:[ printf_format - Debug ]----------"
	@cd "printf_format" && $(MAKE) -f  "printf_format.mk"
clean:
	@echo "----------Cleaning project:[ printf_format - Debug ]----------"
	@cd "printf_format" && $(MAKE) -f  "printf_format.mk" clean
