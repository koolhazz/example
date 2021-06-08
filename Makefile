.PHONY: clean All

All:
	@echo "----------Building project:[ union_anonymous - Debug ]----------"
	@cd "union_anonymous" && "$(MAKE)" -f  "union_anonymous.mk"
clean:
	@echo "----------Cleaning project:[ union_anonymous - Debug ]----------"
	@cd "union_anonymous" && "$(MAKE)" -f  "union_anonymous.mk" clean
