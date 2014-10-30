.PHONY: clean All

All:
	@echo "----------Building project:[ file_size - Debug ]----------"
	@cd "file_size" && $(MAKE) -f  "file_size.mk"
clean:
	@echo "----------Cleaning project:[ file_size - Debug ]----------"
	@cd "file_size" && $(MAKE) -f  "file_size.mk" clean
