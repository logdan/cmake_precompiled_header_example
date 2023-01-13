add_library(my_common_lib
            my_precomp_lib.cpp
          )

# Generate precompiled header which includes lots of STL headers.
# This generates a file cmake_pch.h which is force-inluded in all
# source files in this target, so there is no need to include the
# precompiled header explicitly in your file.
target_precompile_headers(my_common_lib PUBLIC 
    my_precomp_header.h
)

target_include_directories(my_common_lib 
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)