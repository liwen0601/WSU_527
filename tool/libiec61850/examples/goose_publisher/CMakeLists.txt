
set(goose_publisher_example_SRCS
   goose_publisher_example.c
)

IF(WIN32)

set_source_files_properties(${goose_publisher_example_SRCS}
                                       PROPERTIES LANGUAGE CXX)
add_executable(goose_publisher_example
  ${goose_publisher_example_SRCS}
)

target_link_libraries(goose_publisher_example
    iec61850
)

ELSE(WIN32)

add_executable(goose_publisher_example
  ${goose_publisher_example_SRCS}
)

target_link_libraries(goose_publisher_example
    iec61850
)

ENDIF(WIN32)


