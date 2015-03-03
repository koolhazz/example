.PHONY: clean All

All:
	@echo "----------Building project:[ array_malloc - Debug ]----------"
	@cd "array_malloc" && $(MAKE) -f  "array_malloc.mk"
clean:
	@echo "----------Cleaning project:[ array_malloc - Debug ]----------"
	@cd "array_malloc" && $(MAKE) -f  "array_malloc.mk" clean
