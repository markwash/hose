AM_CXXFLAGS = -I$(top_srcdir)/src

check_PROGRAMS = \
	greedy-heuristic-test \
	annealing-heuristic-test

greedy_heuristic_test_SOURCES = \
	greedy-heuristic-test.cc

greedy_heuristic_test_LDFLAGS = -lboost_unit_test_framework-mt

annealing_heuristic_test_SOURCES = \
	annealing-heuristic-test.cc

annealing_heuristic_test_LDFLAGS = -lboost_unit_test_framework-mt

TESTS = $(check_PROGRAMS)
