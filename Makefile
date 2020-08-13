index.html: tmpl.html main.c
	emcc -o index.html main.c \
		-s ERROR_ON_UNDEFINED_SYMBOLS=0 \
		--shell-file tmpl.html
