.PHONY: clean All

All:
	@echo "----------Building project:[ const_scope_cpp - Debug ]----------"
	@cd "const_scope_cpp" && $(MAKE) -f  "const_scope_cpp.mk"
clean:
	@echo "----------Cleaning project:[ const_scope_cpp - Debug ]----------"
	@cd "const_scope_cpp" && $(MAKE) -f  "const_scope_cpp.mk" clean
