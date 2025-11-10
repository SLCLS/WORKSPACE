#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : all)
#endif
#ifdef GNUC  // For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wextra"
#pragma GCC diagnostic ignored "-Wpedantic"
#endif
#ifdef clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wall"
#pragma clang diagnostic ignored "-Wextra"
#pragma clang diagnostic ignored "-Wpedantic"
#endif
#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef GNUC
#pragma GCC diagnostic pop
#endif
#ifdef clang
#pragma clang diagnostic pop
#endif

// START HERE, DISREGARD THE ERROR SUPPRESSION ABOVE.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

// THIS FILE IS BEING USED AS A REFERENCE FOR C++ SYNTAX AND CONCEPTS