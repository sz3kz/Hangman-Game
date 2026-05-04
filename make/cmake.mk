.PHONY: cmake-update cmake-refresh
.SILENT:

SERVER_MAKEFILE_DIRECTORY=external/boilerplate/CPP/

cmake-update:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make cmake-update

cmake-refresh:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make cmake-refresh
