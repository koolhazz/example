.PHONY: clean All

All:
	@echo "----------Building project:[ array_parameter - Debug ]----------"
	@cd "array_parameter" && "$(MAKE)" -f  "array_parameter.mk"
clean:
	@echo "----------Cleaning project:[ array_parameter - Debug ]----------"
	@cd "array_parameter" && "$(MAKE)" -f  "array_parameter.mk" clean
