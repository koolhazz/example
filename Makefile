.PHONY: clean All

All:
	@echo "----------Building project:[ xxprintf - Debug ]----------"
	@cd "xxprintf" && $(MAKE) -f  "xxprintf.mk"
clean:
	@echo "----------Cleaning project:[ xxprintf - Debug ]----------"
	@cd "xxprintf" && $(MAKE) -f  "xxprintf.mk" clean
