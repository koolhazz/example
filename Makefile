.PHONY: clean All

All:
	@echo "----------Building project:[ COW - Debug ]----------"
	@cd "COW" && "$(MAKE)" -f  "COW.mk"
clean:
	@echo "----------Cleaning project:[ COW - Debug ]----------"
	@cd "COW" && "$(MAKE)" -f  "COW.mk" clean
