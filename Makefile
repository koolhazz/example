.PHONY: clean All

All:
	@echo "----------Building project:[ long_string - Debug ]----------"
	@cd "long_string" && "$(MAKE)" -f  "long_string.mk"
clean:
	@echo "----------Cleaning project:[ long_string - Debug ]----------"
	@cd "long_string" && "$(MAKE)" -f  "long_string.mk" clean
