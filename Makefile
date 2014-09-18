.PHONY: clean All

All:
	@echo "----------Building project:[ array_member - Debug ]----------"
	@cd "array_member" && $(MAKE) -f  "array_member.mk"
clean:
	@echo "----------Cleaning project:[ array_member - Debug ]----------"
	@cd "array_member" && $(MAKE) -f  "array_member.mk" clean
