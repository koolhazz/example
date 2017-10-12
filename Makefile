.PHONY: clean All

All:
	@echo "----------Building project:[ bit_field - Debug ]----------"
	@cd "bit_field" && "$(MAKE)" -f  "bit_field.mk"
clean:
	@echo "----------Cleaning project:[ bit_field - Debug ]----------"
	@cd "bit_field" && "$(MAKE)" -f  "bit_field.mk" clean
