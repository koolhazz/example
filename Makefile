.PHONY: clean All

All:
	@echo "----------Building project:[ include_cpp - Debug ]----------"
	@cd "include_cpp" && $(MAKE) -f  "include_cpp.mk"
clean:
	@echo "----------Cleaning project:[ include_cpp - Debug ]----------"
	@cd "include_cpp" && $(MAKE) -f  "include_cpp.mk" clean
