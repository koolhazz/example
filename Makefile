.PHONY: clean All

All:
	@echo "----------Building project:[ struct_hack_data - Debug ]----------"
	@cd "struct_hack_data" && "$(MAKE)" -f  "struct_hack_data.mk"
clean:
	@echo "----------Cleaning project:[ struct_hack_data - Debug ]----------"
	@cd "struct_hack_data" && "$(MAKE)" -f  "struct_hack_data.mk" clean
