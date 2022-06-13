.PHONY: clean All

All:
	@echo "----------Building project:[ func_try - Debug ]----------"
	@cd "func_try" && "$(MAKE)" -f  "func_try.mk"
clean:
	@echo "----------Cleaning project:[ func_try - Debug ]----------"
	@cd "func_try" && "$(MAKE)" -f  "func_try.mk" clean
