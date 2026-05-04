.PHONY: boilerplate-update boilerplate-deinit boilerplate-refresh
.SILENT:

REPOSITORY_ROOT_DIRECTORY=external/boilerplate/
LANGUAGE_DIRECTORY=CPP/


boilerplate-update:
	cd ${REPOSITORY_ROOT_DIRECTORY}${LANGUAGE_DIRECTORY} && make boilerplate-update

boilerplate-deinit:
	cd ${REPOSITORY_ROOT_DIRECTORY}${LANGUAGE_DIRECTORY} && make boilerplate-deinit

boilerplate-refresh:
	cd ${REPOSITORY_ROOT_DIRECTORY}${LANGUAGE_DIRECTORY} && make boilerplate-refresh
