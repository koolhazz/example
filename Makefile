.PHONY: clean All

All:
	@echo "----------Building project:[ string_replace - Debug ]----------"
	@cd "string_replace" && $(MAKE) -f  "string_replace.mk"
clean:
	@echo "----------Cleaning project:[ string_replace - Debug ]----------"
	@cd "string_replace" && $(MAKE) -f  "string_replace.mk" clean
