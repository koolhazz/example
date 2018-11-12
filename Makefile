.PHONY: clean All

All:
	@echo "----------Building project:[ type_pointer - Debug ]----------"
	@cd "type_pointer" && "$(MAKE)" -f  "type_pointer.mk"
clean:
	@echo "----------Cleaning project:[ type_pointer - Debug ]----------"
	@cd "type_pointer" && "$(MAKE)" -f  "type_pointer.mk" clean
