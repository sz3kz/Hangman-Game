.PHONY: git-refresh git-update-ignore git-rehook
.SILENT:

SERVER_MAKEFILE_DIRECTORY=external/boilerplate/CPP/

git-refresh:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make git-refresh

git-update-ignore:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make git-update-ignore

git-rehook:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make git-rehook
