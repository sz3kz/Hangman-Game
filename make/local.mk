.PHONY: clean init build test check-with-tidy

DIRECTORY_BUILD = build/
BUILD_SYSTEM="Ninja"
BUILD_SYSTEM_COMMAND=ninja

clean:
	rm -rf ${DIRECTORY_BUILD}

init: clean
	cmake -S . -B ${DIRECTORY_BUILD} -G ${BUILD_SYSTEM}

build:
	cd ${DIRECTORY_BUILD} && ${BUILD_SYSTEM_COMMAND}

check-with-tidy: build
	git push --dry-run
