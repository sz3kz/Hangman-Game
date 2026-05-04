.PHONY: clang-refresh clang-format-update clang-tidy-update
.SILENT:

SERVER_MAKEFILE_DIRECTORY=external/boilerplate/CPP/

clang-refresh:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make clang-refresh

clang-format-update:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make clang-format-update

clang-tidy-update:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make clang-tidy-update

