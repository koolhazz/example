.PHONY: clean All

All:
	@echo "----------Building project:[ class_inline_2 - Debug ]----------"
	@cd "class_inline_2" && "$(MAKE)" -f  "class_inline_2.mk"
clean:
	@echo "----------Cleaning project:[ class_inline_2 - Debug ]----------"
	@cd "class_inline_2" && "$(MAKE)" -f  "class_inline_2.mk" clean
