# Template C++ com Gerenciador de Pacotes vcpkg

Este repositório fornece um template robusto para iniciar projetos em C++ utilizando CMake. A arquitetura é organizada para separar o código fonte em uma biblioteca estática (`MyLibrary`) e um executável principal (`MyExecutable`), facilitando a manutenção e modularidade.

O template conta com o vcpkg como gerenciador de pacotes e já inclui um exemplo de uso do Google Test. Além disso, apresenta uma separação entre o arquivo main e o core, possibilitando que as dependências do core sejam reutilizadas na criação do executável de testes.

Este template utiliza o padrão de build sem cache (no-cache), ou seja, não reaproveita builds anteriores. Embora isso não seja ideal para projetos grandes, é facilmente modificável; basta alterar o `Makefile` conforme necessário.

## Dependências

O gerenciamento de dependências é realizado via **vcpkg**, e o projeto já inclui integração completa com **Google Test** para testes unitários automatizados.

### Adicionando novas dependências

Para adicionar novas dependências ao vcpkg, basta executar o comando abaixo:

```bash
vcpkg add port <package_name>
```

É possível buscar pelas dependências no site oficial; basta [clicar aqui](https://vcpkg.io/en/packages?query=).

O projeto atualmente possui dois arquivos de configuração de dependências. Um está configurado para usar a versão exata do GTest, servindo de exemplo caso o usuário precise fixar versões específicas.

O segundo arquivo é o `vcpkg-no-exactly-version.json`. Para utilizá-lo, basta renomeá-lo para `vcpkg.json`; ele utiliza o formato de versão mínima do GTest.

## Compilação

Para compilar o projeto, utilize os comandos:

```bash
make run
```

o `make run` já vai rodar as etapas anteriores, mas caso queira rodar individualmente veja a sequencia no arquivo `Makefile`.

## Testes

Para executar os testes:

```bash
make test
```

Caso adicione mais testes via add_tests do cmake é possível rodar isoladamente com o comando abaixo:

```bash
make test TEST_NAME=MyTest
```

	Obs.: Caso queira rodar algum teste especifico do GTest, nessa versão do template tera que modificar os scripts manualmente.
