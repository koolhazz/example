.PHONY: clean All

All:
	@echo "----------Building project:[ strstr_tuning - Debug ]----------"
	@cd "strstr_tuning" && $(MAKE) -f  "strstr_tuning.mk"
clean:
	@echo "----------Cleaning project:[ strstr_tuning - Debug ]----------"
	@cd "strstr_tuning" && $(MAKE) -f  "strstr_tuning.mk" clean
