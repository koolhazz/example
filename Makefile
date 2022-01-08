.PHONY: clean All

All:
	@echo "----------Building project:[ RingBuffer - Debug ]----------"
	@cd "RingBuffer" && "$(MAKE)" -f  "RingBuffer.mk"
clean:
	@echo "----------Cleaning project:[ RingBuffer - Debug ]----------"
	@cd "RingBuffer" && "$(MAKE)" -f  "RingBuffer.mk" clean
