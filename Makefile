.PHONY: clean All

All:
	@echo "----------Building project:[ array_new - Debug ]----------"
	@cd "array_new" && $(MAKE) -f  "array_new.mk"
clean:
	@echo "----------Cleaning project:[ array_new - Debug ]----------"
	@cd "array_new" && $(MAKE) -f  "array_new.mk" clean
