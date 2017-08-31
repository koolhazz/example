.PHONY: clean All

All:
	@echo "----------Building project:[ function-try-lock-2 - Debug ]----------"
	@cd "function-try-lock-2" && "$(MAKE)" -f  "function-try-lock-2.mk"
clean:
	@echo "----------Cleaning project:[ function-try-lock-2 - Debug ]----------"
	@cd "function-try-lock-2" && "$(MAKE)" -f  "function-try-lock-2.mk" clean
