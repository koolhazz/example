.PHONY: clean All

All:
	@echo "----------Building project:[ case_ex - Debug ]----------"
	@cd "case_ex" && $(MAKE) -f  "case_ex.mk"
clean:
	@echo "----------Cleaning project:[ case_ex - Debug ]----------"
	@cd "case_ex" && $(MAKE) -f  "case_ex.mk" clean
