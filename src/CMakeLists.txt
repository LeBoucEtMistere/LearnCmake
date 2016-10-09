set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})


add_library (Sqr sqr.cpp)
target_include_directories(Sqr PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable (LearnCMake main.cpp)
target_include_directories(LearnCMake PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries (LearnCMake Sqr)