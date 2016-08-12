.PHONY: clean All

All:
	@echo "----------Building project:[ CuckooFilter - Debug ]----------"
	@cd "CuckooFilter" && "$(MAKE)" -f  "CuckooFilter.mk"
clean:
	@echo "----------Cleaning project:[ CuckooFilter - Debug ]----------"
	@cd "CuckooFilter" && "$(MAKE)" -f  "CuckooFilter.mk" clean
