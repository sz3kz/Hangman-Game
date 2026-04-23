.PHONY: dotfiles-activate dotfiles-update dotfiles-purge dotfiles-refresh

SERVER_MAKEFILE_DIRECTORY=external/dotfiles/CPP/

dotfiles-activate:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make dotfiles-activate

dotfiles-update:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make dotfiles-update

dotfiles-purge:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make dotfiles-purge

dotfiles-refresh:
	cd ${SERVER_MAKEFILE_DIRECTORY} && make dotfiles-refresh
