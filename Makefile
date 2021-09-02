.PHONY: clean All

All:
	@echo "----------Building project:[ getopt_long - Debug ]----------"
	@cd "getopt_long" && "$(MAKE)" -f  "getopt_long.mk"
clean:
	@echo "----------Cleaning project:[ getopt_long - Debug ]----------"
	@cd "getopt_long" && "$(MAKE)" -f  "getopt_long.mk" clean
