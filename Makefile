.PHONY: clean All

All:
	@echo "----------Building project:[ call_static_func - Debug ]----------"
	@cd "call_static_func" && "$(MAKE)" -f  "call_static_func.mk"
clean:
	@echo "----------Cleaning project:[ call_static_func - Debug ]----------"
	@cd "call_static_func" && "$(MAKE)" -f  "call_static_func.mk" clean
