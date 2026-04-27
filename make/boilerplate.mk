.PHONY: boilerplate-activate boilerplate-update boilerplate-deinit boilerplate-refresh boilerplate-check-prerequesites
.SILENT:

REPOSITORY_ROOT_DIRECTORY=external/boilerplate/
LANGUAGE_DIRECTORY=CPP/

boilerplate-activate: boilerplate-check-prerequesites
	git submodule update --init
	cd ${REPOSITORY_ROOT_DIRECTORY} && git sparse-checkout init --cone
	cd ${REPOSITORY_ROOT_DIRECTORY} && git sparse-checkout set ${LANGUAGE_DIRECTORY}

boilerplate-update:
	cd ${REPOSITORY_ROOT_DIRECTORY}${LANGUAGE_DIRECTORY} && make boilerplate-update

boilerplate-deinit:
	cd ${REPOSITORY_ROOT_DIRECTORY}${LANGUAGE_DIRECTORY} && make boilerplate-deinit

boilerplate-refresh:
	cd ${REPOSITORY_ROOT_DIRECTORY}${LANGUAGE_DIRECTORY} && make boilerplate-refresh

boilerplate-check-prerequesites:
	echo -n "Checking Prerequesite make:          "
	command -v make >/dev/null
	echo "Installed!"
	echo -n "Checking Prerequesite cmake:         "
	command -v cmake >/dev/null
	echo "Installed!"
	echo -n "Checking Prerequesite pre-commit:    "
	command -v pre-commit >/dev/null
	echo "Installed!"
	echo -n "Checking Prerequesite git:           "
	command -v git >/dev/null
	echo "Installed!"
	echo -n "Checking Prerequesite clang:         "
	command -v clang >/dev/null
	echo "Installed!"
	echo -n "Checking Prerequesite clang-format:  "
	command -v clang-format >/dev/null
	echo "Installed!"
	echo -n "Checking Prerequesite clang-tidy:    "
	command -v clang-tidy >/dev/null
	echo "Installed!"
	echo "Prerequesite Check Ended Successfully!"
