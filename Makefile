.PHONY: clean All

All:
	@echo "----------Building project:[ class_copy_cons_2 - Debug ]----------"
	@cd "class_copy_cons_2" && "$(MAKE)" -f  "class_copy_cons_2.mk"
clean:
	@echo "----------Cleaning project:[ class_copy_cons_2 - Debug ]----------"
	@cd "class_copy_cons_2" && "$(MAKE)" -f  "class_copy_cons_2.mk" clean
