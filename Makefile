.PHONY: clean All

All:
	@echo "----------Building project:[ atoi - Debug ]----------"
	@cd "atoi" && $(MAKE) -f  "atoi.mk"
clean:
	@echo "----------Cleaning project:[ atoi - Debug ]----------"
	@cd "atoi" && $(MAKE) -f  "atoi.mk" clean
