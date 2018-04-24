.PHONY: clean All

All:
	@echo "----------Building project:[ class_member - Debug ]----------"
	@cd "class_member" && "$(MAKE)" -f  "class_member.mk"
clean:
	@echo "----------Cleaning project:[ class_member - Debug ]----------"
	@cd "class_member" && "$(MAKE)" -f  "class_member.mk" clean
