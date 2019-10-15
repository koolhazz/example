.PHONY: clean All

All:
	@echo "----------Building project:[ macro_list - Debug ]----------"
	@cd "macro_list" && "$(MAKE)" -f  "macro_list.mk"
clean:
	@echo "----------Cleaning project:[ macro_list - Debug ]----------"
	@cd "macro_list" && "$(MAKE)" -f  "macro_list.mk" clean
