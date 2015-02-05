.PHONY: clean All

All:
	@echo "----------Building project:[ bit_operator - Debug ]----------"
	@cd "bit_operator" && $(MAKE) -f  "bit_operator.mk"
clean:
	@echo "----------Cleaning project:[ bit_operator - Debug ]----------"
	@cd "bit_operator" && $(MAKE) -f  "bit_operator.mk" clean
