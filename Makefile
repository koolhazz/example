.PHONY: clean All

All:
	@echo "----------Building project:[ typeid - Debug ]----------"
	@cd "typeid" && "$(MAKE)" -f  "typeid.mk"
clean:
	@echo "----------Cleaning project:[ typeid - Debug ]----------"
	@cd "typeid" && "$(MAKE)" -f  "typeid.mk" clean
