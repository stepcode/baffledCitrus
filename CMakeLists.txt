CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT( baffledCitrus )

# perplex, lemon, re2c

# set some variables so that we don't have to use FIND()
# also add dependencies so that perplex is built after re2c and
# re2c is built after lemon
if( DISABLE_BAFFLEDCITRUS_BUNDLE )
  message( WARNING "Bundle disabled. This CMakeLists.txt isn't very useful without that!" )
else()
  # Output directories.
  IF(NOT DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY)
    SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib CACHE INTERNAL "Single output directory for building all libraries.")
  ENDIF(NOT DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY)
  IF(NOT DEFINED CMAKE_ARCHIVE_OUTPUT_DIRECTORY)
    SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib CACHE INTERNAL "Single output directory for building all archives.")
  ENDIF(NOT DEFINED CMAKE_ARCHIVE_OUTPUT_DIRECTORY)
  IF(NOT DEFINED CMAKE_RUNTIME_OUTPUT_DIRECTORY)
    SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin CACHE INTERNAL "Single output directory for building all executables.")
  ENDIF(NOT DEFINED CMAKE_RUNTIME_OUTPUT_DIRECTORY)

  #lemon
  set( LEMON_SKIP_INSTALL TRUE )
  set( LEMON_TEMPLATE "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/lempar.c" )
  set( LEMON_EXECUTABLE "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/lemon" )
  include( cmake/LEMON_Util.cmake )

  #re2c
  set( RE2C_IS_SUBBUILD TRUE )
  set( RE2C_EXECUTABLE "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/re2c" )
  set( CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}" )

  #perplex
  set( PERPLEX_IS_SUBBUILD TRUE )
endif( DISABLE_BAFFLEDCITRUS_BUNDLE )


add_subdirectory(lemon)
add_subdirectory(re2c)
add_subdirectory(perplex)
