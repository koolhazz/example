.PHONY: clean All

All:
	@echo "----------Building project:[ struct_init_cpp - Debug ]----------"
	@cd "struct_init_cpp" && "$(MAKE)" -f  "struct_init_cpp.mk"
clean:
	@echo "----------Cleaning project:[ struct_init_cpp - Debug ]----------"
	@cd "struct_init_cpp" && "$(MAKE)" -f  "struct_init_cpp.mk" clean
