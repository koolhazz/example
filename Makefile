.PHONY: clean All

All:
	@echo "----------Building project:[ map_compare - Debug ]----------"
	@cd "map_compare" && $(MAKE) -f  "map_compare.mk"
clean:
	@echo "----------Cleaning project:[ map_compare - Debug ]----------"
	@cd "map_compare" && $(MAKE) -f  "map_compare.mk" clean
