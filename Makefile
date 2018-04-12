.PHONY: clean All

All:
	@echo "----------Building project:[ static_var - Debug ]----------"
	@cd "static_var" && "$(MAKE)" -f  "static_var.mk"
clean:
	@echo "----------Cleaning project:[ static_var - Debug ]----------"
	@cd "static_var" && "$(MAKE)" -f  "static_var.mk" clean
