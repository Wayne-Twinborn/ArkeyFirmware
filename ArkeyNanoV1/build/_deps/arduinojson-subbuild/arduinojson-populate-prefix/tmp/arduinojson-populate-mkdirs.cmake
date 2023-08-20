# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-src"
  "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-build"
  "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-subbuild/arduinojson-populate-prefix"
  "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-subbuild/arduinojson-populate-prefix/tmp"
  "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-subbuild/arduinojson-populate-prefix/src/arduinojson-populate-stamp"
  "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-subbuild/arduinojson-populate-prefix/src"
  "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-subbuild/arduinojson-populate-prefix/src/arduinojson-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-subbuild/arduinojson-populate-prefix/src/arduinojson-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/Wayne/dev/ArkeyFirmware/ArkeyNanoV1/build/_deps/arduinojson-subbuild/arduinojson-populate-prefix/src/arduinojson-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
