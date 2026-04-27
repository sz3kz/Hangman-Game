.PHONY: cmake-retemplate cmake-refresh
.SILENT:

SERVER_MAKEFILE_DIRECTORY=external/boilerplate/CPP/

cmake-retemplate:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make cmake-retemplate

cmake-refresh:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make cmake-refresh
