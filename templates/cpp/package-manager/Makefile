# Variáveis de configuração com valores padrão
# Use ?= para permitir sobrescrever via linha de comando (ex: make test TESTS=ON)
BUILD_TYPE ?= Release
TESTS ?= OFF
# Filtro para rodar testes específicos (regex). Ex: make test TESTS=ON TEST_NAME=Sum
TEST_NAME ?=

install-deps:
	vcpkg install

cmake: install-deps
	cmake --preset=default -DCMAKE_BUILD_TYPE=$(BUILD_TYPE) -Denable_tests=$(TESTS)

build: cmake
	cmake --build build

run: build
	cd build && ./MyExecutable

test:
	$(MAKE) build TESTS=ON
	cd build && ctest --output-on-failure $(if $(TEST_NAME),-R $(TEST_NAME))

clean-all:
	rm -rf build

.PHONY: install-deps cmake build run test clean-all
