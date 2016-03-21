.PHONY: clean All

All:
	@echo "----------Building project:[ class_define - Debug ]----------"
	@cd "class_define" && "$(MAKE)" -f  "class_define.mk"
clean:
	@echo "----------Cleaning project:[ class_define - Debug ]----------"
	@cd "class_define" && "$(MAKE)" -f  "class_define.mk" clean
