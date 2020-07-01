Some simple experiments trying to measure the performance of C stdio.h functions and C++ iostream objects.

(I want to write a better description here, but I need to sleep)


How to use:

1. Enter one of the subdirectories.
2. Run 'make bench'.

Detailed description:

* Each subdirectory has a small Makefile that contains only specific variables
  for the programs in that directory.
* All Makefiles include the Makefile.common, which is the one responsible for
  all the dirty work.
* Available make targets are: all (the default), clean, bench
