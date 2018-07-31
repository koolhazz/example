.PHONY: clean All

All:
	@echo "----------Building project:[ class_method_3 - Debug ]----------"
	@cd "class_method_3" && "$(MAKE)" -f  "class_method_3.mk"
clean:
	@echo "----------Cleaning project:[ class_method_3 - Debug ]----------"
	@cd "class_method_3" && "$(MAKE)" -f  "class_method_3.mk" clean
