.PHONY: clean All

All:
	@echo "----------Building project:[ class_cons_dest - Debug ]----------"
	@cd "class_cons_dest" && "$(MAKE)" -f  "class_cons_dest.mk"
clean:
	@echo "----------Cleaning project:[ class_cons_dest - Debug ]----------"
	@cd "class_cons_dest" && "$(MAKE)" -f  "class_cons_dest.mk" clean
