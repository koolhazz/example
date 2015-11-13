.PHONY: clean All

All:
	@echo "----------Building project:[ pair - Debug ]----------"
	@cd "pair" && "$(MAKE)" -f  "pair.mk"
clean:
	@echo "----------Cleaning project:[ pair - Debug ]----------"
	@cd "pair" && "$(MAKE)" -f  "pair.mk" clean
