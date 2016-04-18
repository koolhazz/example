.PHONY: clean All

All:
	@echo "----------Building project:[ struct_copy_cpp - Debug ]----------"
	@cd "struct_copy_cpp" && "$(MAKE)" -f  "struct_copy_cpp.mk"
clean:
	@echo "----------Cleaning project:[ struct_copy_cpp - Debug ]----------"
	@cd "struct_copy_cpp" && "$(MAKE)" -f  "struct_copy_cpp.mk" clean
