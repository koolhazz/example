.PHONY: clean All

All:
	@echo "----------Building project:[ new_type - Debug ]----------"
	@cd "new_type" && "$(MAKE)" -f  "new_type.mk"
clean:
	@echo "----------Cleaning project:[ new_type - Debug ]----------"
	@cd "new_type" && "$(MAKE)" -f  "new_type.mk" clean
