.PHONY: clean All

All:
	@echo "----------Building project:[ switch_down - Debug ]----------"
	@cd "switch_down" && $(MAKE) -f  "switch_down.mk"
clean:
	@echo "----------Cleaning project:[ switch_down - Debug ]----------"
	@cd "switch_down" && $(MAKE) -f  "switch_down.mk" clean
