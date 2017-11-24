.PHONY: clean All

All:
	@echo "----------Building project:[ operator - Debug ]----------"
	@cd "operator" && "$(MAKE)" -f  "operator.mk"
clean:
	@echo "----------Cleaning project:[ operator - Debug ]----------"
	@cd "operator" && "$(MAKE)" -f  "operator.mk" clean
