.PHONY: clean All

All:
	@echo "----------Building project:[ DataType - Debug ]----------"
	@cd "E:\data\example\DataType" && $(MAKE) -f  "DataType.mk"
clean:
	@echo "----------Cleaning project:[ DataType - Debug ]----------"
	@cd "E:\data\example\DataType" && $(MAKE) -f  "DataType.mk" clean
