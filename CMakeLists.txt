cmake_minimum_required(VERSION 2.8.9...3.23.2)
project(finetd)



file(GLOB SOURCES "src/*.c")

add_executable(finetd ${SOURCES})

install(TARGETS finetd DESTINATION /usr/local/bin)


SET(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "finetd")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "KK") #required
INCLUDE(CPack)
