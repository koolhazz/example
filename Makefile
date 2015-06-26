.PHONY: clean All

All:
	@echo "----------Building project:[ struct_malloc - Debug ]----------"
	@cd "struct_malloc" && $(MAKE) -f  "struct_malloc.mk"
clean:
	@echo "----------Cleaning project:[ struct_malloc - Debug ]----------"
	@cd "struct_malloc" && $(MAKE) -f  "struct_malloc.mk" clean
