.PHONY: clean All

All:
	@echo "----------Building project:[ class_method_4 - Debug ]----------"
	@cd "class_method_4" && "$(MAKE)" -f  "class_method_4.mk"
clean:
	@echo "----------Cleaning project:[ class_method_4 - Debug ]----------"
	@cd "class_method_4" && "$(MAKE)" -f  "class_method_4.mk" clean
