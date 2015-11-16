.PHONY: clean All

All:
	@echo "----------Building project:[ macro_string - Debug ]----------"
	@cd "macro_string" && "$(MAKE)" -f  "macro_string.mk"
clean:
	@echo "----------Cleaning project:[ macro_string - Debug ]----------"
	@cd "macro_string" && "$(MAKE)" -f  "macro_string.mk" clean
