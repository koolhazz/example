.PHONY: clean All

All:
	@echo "----------Building project:[ class_virtual_dtor - Debug ]----------"
	@cd "class_virtual_dtor" && "$(MAKE)" -f  "class_virtual_dtor.mk"
clean:
	@echo "----------Cleaning project:[ class_virtual_dtor - Debug ]----------"
	@cd "class_virtual_dtor" && "$(MAKE)" -f  "class_virtual_dtor.mk" clean
