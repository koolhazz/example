.PHONY: clean All

All:
	@echo "----------Building project:[ class_method_static_var - Debug ]----------"
	@cd "class_method_static_var" && "$(MAKE)" -f  "class_method_static_var.mk"
clean:
	@echo "----------Cleaning project:[ class_method_static_var - Debug ]----------"
	@cd "class_method_static_var" && "$(MAKE)" -f  "class_method_static_var.mk" clean
