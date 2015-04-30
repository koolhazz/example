.PHONY: clean All

All:
	@echo "----------Building project:[ macro - Debug ]----------"
	@cd "macro" && $(MAKE) -f  "macro.mk"
clean:
	@echo "----------Cleaning project:[ macro - Debug ]----------"
	@cd "macro" && $(MAKE) -f  "macro.mk" clean
