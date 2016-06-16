.PHONY: clean All

All:
	@echo "----------Building project:[ map_erase3 - Debug ]----------"
	@cd "map_erase3" && "$(MAKE)" -f  "map_erase3.mk"
clean:
	@echo "----------Cleaning project:[ map_erase3 - Debug ]----------"
	@cd "map_erase3" && "$(MAKE)" -f  "map_erase3.mk" clean
