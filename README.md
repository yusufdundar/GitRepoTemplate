
# C++, Cmake, Travis ve GogleTest içeren proje şablonu
Cmake, Travis gibi toolları kullanarak google test (gTest) içeren basit bir C++ projesi oluşturma amacıyla açılan template repodur.
Projesinde bu toolları kullanmak isteyenler, konfigurasyon dosyalarının içeriğini ve proje yapısını örnek alabilirler.

 [![Build Status](https://travis-ci.com/yusufdundar/GitRepoTemplate.svg?branch=master)](https://travis-ci.com/yusufdundar/GitRepoTemplate) [![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

## Build etmek için:

Kök dizin içerisinde:

    mkdir build
    cd build
    cmake ..
    make
    
komutlarını sırasıyla yazmanız yeterlidir. Sonrasında test klasörünün içinde ExampleTests isimli executable'ın oluştuğunu göreceksiniz. Çalıştırıldığında karşımıza aşağıdaki gibi ekran gelecektir:
  
~~~~
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from ExampleTests
[ RUN      ] ExampleTests.Accumulator
[       OK ] ExampleTests.Accumulator (0 ms)
[ RUN      ] ExampleTests.Squre
[       OK ] ExampleTests.Squre (0 ms)
[----------] 2 tests from ExampleTests (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
~~~~
