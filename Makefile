.PHONY: clean All

All:
	@echo "----------Building project:[ number_max - Debug ]----------"
	@cd "number_max" && "$(MAKE)" -f  "number_max.mk"
clean:
	@echo "----------Cleaning project:[ number_max - Debug ]----------"
	@cd "number_max" && "$(MAKE)" -f  "number_max.mk" clean
