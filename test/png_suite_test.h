#ifndef PNG_SUITE_TEST_H
#define PNG_SUITE_TEST_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

int png_suite_test(const char *path_to_png_suite, const char *path_to_rgba_files, bool verbose);

#ifdef __cplusplus
}
#endif

#endif
