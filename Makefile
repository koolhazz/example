.PHONY: clean All

All:
	@echo "----------Building project:[ strtok - Debug ]----------"
	@cd "strtok" && "$(MAKE)" -f  "strtok.mk"
clean:
	@echo "----------Cleaning project:[ strtok - Debug ]----------"
	@cd "strtok" && "$(MAKE)" -f  "strtok.mk" clean
