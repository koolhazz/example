.PHONY: clean All

All:
	@echo "----------Building project:[ pointer_plus_sub - Debug ]----------"
	@cd "pointer_plus_sub" && "$(MAKE)" -f  "pointer_plus_sub.mk"
clean:
	@echo "----------Cleaning project:[ pointer_plus_sub - Debug ]----------"
	@cd "pointer_plus_sub" && "$(MAKE)" -f  "pointer_plus_sub.mk" clean
