.PHONY: clean All

All:
	@echo "----------Building project:[ struct_pack - Debug ]----------"
	@cd "struct_pack" && "$(MAKE)" -f  "struct_pack.mk"
clean:
	@echo "----------Cleaning project:[ struct_pack - Debug ]----------"
	@cd "struct_pack" && "$(MAKE)" -f  "struct_pack.mk" clean
