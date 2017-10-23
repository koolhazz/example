.PHONY: clean All

All:
	@echo "----------Building project:[ func_va - Debug ]----------"
	@cd "func_va" && "$(MAKE)" -f  "func_va.mk"
clean:
	@echo "----------Cleaning project:[ func_va - Debug ]----------"
	@cd "func_va" && "$(MAKE)" -f  "func_va.mk" clean
