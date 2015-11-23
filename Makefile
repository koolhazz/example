.PHONY: clean All

All:
	@echo "----------Building project:[ class_static_member - Debug ]----------"
	@cd "class_static_member" && "$(MAKE)" -f  "class_static_member.mk"
clean:
	@echo "----------Cleaning project:[ class_static_member - Debug ]----------"
	@cd "class_static_member" && "$(MAKE)" -f  "class_static_member.mk" clean
