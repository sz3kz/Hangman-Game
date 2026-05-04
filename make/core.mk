.PHONY: core-check-prerequesites core-activate
.SILENT:

PREREQS := make cmake pre-commit git clang clang-format clang-tidy cppcheck
REPOSITORY_ROOT_DIRECTORY=external/boilerplate/
LANGUAGE_DIRECTORY=CPP/

core-check-prerequesites:
	for tool in $(PREREQS); do \
		printf "Checking Prerequisite %-15s " "$$tool:"; \
		if command -v $$tool >/dev/null 2>&1; then \
			echo "Installed!"; \
		else \
			echo "MISSING!"; exit 1; \
		fi; \
	done
	echo "Prerequisite Check Ended Successfully!"

core-activate: core-check-prerequesites
	git submodule update --init
	cd ${REPOSITORY_ROOT_DIRECTORY} && git sparse-checkout init --cone
	cd ${REPOSITORY_ROOT_DIRECTORY} && git sparse-checkout set ${LANGUAGE_DIRECTORY}
