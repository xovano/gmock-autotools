# Pthread should be enabled everywhere when Gtest is used
AM_CXXFLAGS = -std=c++11 -pthread
AM_CPPFLAGS = -isystem $(srcdir)/gmockfused


# Gmock is compiled as a convenience lib without coverage instrumentation
noinst_LIBRARIES = libgmock-gtest-all.a

libgmock_gtest_all_a_SOURCES = \
    gmockfused/gmock-gtest-all.cc \
    gmockfused/gtest/gtest.h \
    gmockfused/gmock/gmock.h


app_sources = \
    ../arith.cpp \
    ../arith.hpp

test_sources = \
    main.cpp \
    arith_test.cpp

bin_PROGRAMS = toy-test

toy_test_SOURCES = $(app_sources) $(test_sources)

toy_test_CPPFLAGS = \
    $(AM_CPPFLAGS) \
    -DG_TEST

toy_test_CXXFLAGS = \
    $(AM_CXXFLAGS) \
    -Wall \
    -Wextra \
    -pedantic \
    -fno-elide-constructors \
    --coverage

toy_test_LDADD = \
    libgmock-gtest-all.a \
    -lpthread

toy_test_LDFLAGS = --coverage

