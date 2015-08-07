.PHONY: clean All

All:
	@echo "----------Building project:[ list_rever - Debug ]----------"
	@cd "list_rever" && $(MAKE) -f  "list_rever.mk"
clean:
	@echo "----------Cleaning project:[ list_rever - Debug ]----------"
	@cd "list_rever" && $(MAKE) -f  "list_rever.mk" clean
