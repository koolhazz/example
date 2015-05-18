.PHONY: clean All

All:
	@echo "----------Building project:[ pointer_derefence - Debug ]----------"
	@cd "pointer_derefence" && $(MAKE) -f  "pointer_derefence.mk"
clean:
	@echo "----------Cleaning project:[ pointer_derefence - Debug ]----------"
	@cd "pointer_derefence" && $(MAKE) -f  "pointer_derefence.mk" clean
