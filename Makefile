.PHONY: clean All

All:
	@echo "----------Building project:[ union_vector - Debug ]----------"
	@cd "union_vector" && "$(MAKE)" -f  "union_vector.mk"
clean:
	@echo "----------Cleaning project:[ union_vector - Debug ]----------"
	@cd "union_vector" && "$(MAKE)" -f  "union_vector.mk" clean
