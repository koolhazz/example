.PHONY: clean All

All:
	@echo "----------Building project:[ type_max_value - Debug ]----------"
	@cd "type_max_value" && $(MAKE) -f  "type_max_value.mk"
clean:
	@echo "----------Cleaning project:[ type_max_value - Debug ]----------"
	@cd "type_max_value" && $(MAKE) -f  "type_max_value.mk" clean
