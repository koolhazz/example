.PHONY: clean All

All:
	@echo "----------Building project:[ bitmap - Debug ]----------"
	@cd "bitmap" && "$(MAKE)" -f  "bitmap.mk"
clean:
	@echo "----------Cleaning project:[ bitmap - Debug ]----------"
	@cd "bitmap" && "$(MAKE)" -f  "bitmap.mk" clean
