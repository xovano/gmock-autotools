#ACLOCAL_AMFLAGS = -I m4
AM_CXXFLAGS = -Wall -Wextra -pedantic -std=c++11


# Code under test are compiled as a convenience lib with coverage instrumentation.
noinst_LIBRARIES = libarith.a
libarith_a_SOURCES = ../arith.cpp ../arith.hpp
libarith_a_CPPFLAGS = -DG_TEST  # allow detection of test build
libarith_a_CXXFLAGS = $(AM_CXXFLAGS) -g --coverage  # is -g really needed here?

distclean-local:
	-rm *.cpp *.hpp

# Test code is compiled without coverage instrumentation and linked with
# library of code under test to create test executable.
bin_PROGRAMS = toy-test

gmock_sources = \
    gmock-gtest-all.cc \
    gtest/gtest.h \
    gmock/gmock.h

toy_test_SOURCES = \
    main.cpp \
    $(gmock_sources) \
    arith_test.cpp

toy_test_CPPFLAGS = \
    -I$(srcdir)/..

toy_test_CXXFLAGS = $(AM_CXXFLAGS) -g -O2 -pthread

toy_test_LDADD = \
    libarith.a \
    -lpthread \
    -lgcov

