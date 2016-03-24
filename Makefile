.PHONY: clean All

All:
	@echo "----------Building project:[ bit_op - Debug ]----------"
	@cd "bit_op" && "$(MAKE)" -f  "bit_op.mk"
clean:
	@echo "----------Cleaning project:[ bit_op - Debug ]----------"
	@cd "bit_op" && "$(MAKE)" -f  "bit_op.mk" clean
