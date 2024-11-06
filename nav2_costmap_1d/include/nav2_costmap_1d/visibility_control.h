#ifndef NAV2_COSTMAP_1D__VISIBILITY_CONTROL_H_
#define NAV2_COSTMAP_1D__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define NAV2_COSTMAP_1D_EXPORT __attribute__ ((dllexport))
    #define NAV2_COSTMAP_1D_IMPORT __attribute__ ((dllimport))
  #else
    #define NAV2_COSTMAP_1D_EXPORT __declspec(dllexport)
    #define NAV2_COSTMAP_1D_IMPORT __declspec(dllimport)
  #endif
  #ifdef NAV2_COSTMAP_1D_BUILDING_LIBRARY
    #define NAV2_COSTMAP_1D_PUBLIC NAV2_COSTMAP_1D_EXPORT
  #else
    #define NAV2_COSTMAP_1D_PUBLIC NAV2_COSTMAP_1D_IMPORT
  #endif
  #define NAV2_COSTMAP_1D_PUBLIC_TYPE NAV2_COSTMAP_1D_PUBLIC
  #define NAV2_COSTMAP_1D_LOCAL
#else
  #define NAV2_COSTMAP_1D_EXPORT __attribute__ ((visibility("default")))
  #define NAV2_COSTMAP_1D_IMPORT
  #if __GNUC__ >= 4
    #define NAV2_COSTMAP_1D_PUBLIC __attribute__ ((visibility("default")))
    #define NAV2_COSTMAP_1D_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define NAV2_COSTMAP_1D_PUBLIC
    #define NAV2_COSTMAP_1D_LOCAL
  #endif
  #define NAV2_COSTMAP_1D_PUBLIC_TYPE
#endif

#endif  // NAV2_COSTMAP_1D__VISIBILITY_CONTROL_H_
