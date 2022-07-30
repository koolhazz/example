.PHONY: clean All

All:
	@echo "----------Building project:[ exception_uncatch - Debug ]----------"
	@cd "exception_uncatch" && "$(MAKE)" -f  "exception_uncatch.mk"
clean:
	@echo "----------Cleaning project:[ exception_uncatch - Debug ]----------"
	@cd "exception_uncatch" && "$(MAKE)" -f  "exception_uncatch.mk" clean
