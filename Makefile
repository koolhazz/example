.PHONY: clean All

All:
	@echo "----------Building project:[ map_vector - Debug ]----------"
	@cd "map_vector" && $(MAKE) -f  "map_vector.mk"
clean:
	@echo "----------Cleaning project:[ map_vector - Debug ]----------"
	@cd "map_vector" && $(MAKE) -f  "map_vector.mk" clean
