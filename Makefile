.PHONY: clean All

All:
	@echo "----------Building project:[ struct_hack - Debug ]----------"
	@cd "struct_hack" && "$(MAKE)" -f  "struct_hack.mk"
clean:
	@echo "----------Cleaning project:[ struct_hack - Debug ]----------"
	@cd "struct_hack" && "$(MAKE)" -f  "struct_hack.mk" clean
