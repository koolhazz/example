.PHONY: clean All

All:
	@echo "----------Building project:[ class_inherit - Debug ]----------"
	@cd "class_inherit" && "$(MAKE)" -f  "class_inherit.mk"
clean:
	@echo "----------Cleaning project:[ class_inherit - Debug ]----------"
	@cd "class_inherit" && "$(MAKE)" -f  "class_inherit.mk" clean
