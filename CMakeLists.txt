cmake_minimum_required(VERSION 2.8)

project(RegionMeshToy CXX)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -std=c++11 -Wall -Wpedantic -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC")

include_directories(${CMAKE_SOURCE_DIR})

set(HDRS
  LifeV.hpp
  ElementShapes.hpp
  MarkerDefinitions.hpp
  Marker.hpp
  MeshElement.hpp
  MeshElementMarked.hpp
  MeshEntityContainer.hpp
  MeshEntity.hpp
  MeshVertex.hpp
  RegionMesh.hpp
)

install(FILES ${HDRS}
  DESTINATION include
)

add_executable(test test.cpp ${HDRS})
