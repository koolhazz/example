.PHONY: clean All

All:
	@echo "----------Building project:[ condition_three - Debug ]----------"
	@cd "condition_three" && "$(MAKE)" -f  "condition_three.mk"
clean:
	@echo "----------Cleaning project:[ condition_three - Debug ]----------"
	@cd "condition_three" && "$(MAKE)" -f  "condition_three.mk" clean
