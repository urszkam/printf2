# Tests

These are comparison tests for `ft_printf` project in 42.

Required library:

```sh
sudo apt-get install libgtest-dev
```

Run the tests from the `tests` directory:

```sh
make tests
make bonus-tests
make clean
```

`make tests` compiles and runs `test_specifiers.cpp`.
`make bonus-tests` compiles and runs `test_flags.cpp`.

`tests` covers the basic specifiers (`%c`, `%s`, `%p`, `%d`, `%i`,
`%u`, `%x`, `%X`, `%%`).
`bonus-tests` covers extra flags `# +` and flag combinations.
