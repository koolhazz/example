.PHONY: clean All

All:
	@echo "----------Building project:[ pragma_gcc - Debug ]----------"
	@cd "pragma_gcc" && "$(MAKE)" -f  "pragma_gcc.mk"
clean:
	@echo "----------Cleaning project:[ pragma_gcc - Debug ]----------"
	@cd "pragma_gcc" && "$(MAKE)" -f  "pragma_gcc.mk" clean
