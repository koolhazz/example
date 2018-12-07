.PHONY: clean All

All:
	@echo "----------Building project:[ bit - Debug ]----------"
	@cd "bit" && "$(MAKE)" -f  "bit.mk"
clean:
	@echo "----------Cleaning project:[ bit - Debug ]----------"
	@cd "bit" && "$(MAKE)" -f  "bit.mk" clean
