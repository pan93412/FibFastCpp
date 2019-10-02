# to build, use cmake instead.

.PHONY: lint
lint:
	astyle --style=google *.cpp
