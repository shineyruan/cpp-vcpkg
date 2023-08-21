add_library(loggings logging.cpp)

target_link_libraries(loggings
  spdlog::spdlog
  fmt::fmt
)

# Get the LINK_LIBRARIES property for this target.
get_target_property(LOGGING_LINKED_LIBS loggings LINK_LIBRARIES)

# Remove one item from the list, and overwrite the previous LINK_LIBRARIES property for e3.
list(REMOVE_ITEM LOGGING_LINKED_LIBS loggings)
set_property(TARGET loggings PROPERTY LINK_LIBRARIES ${LOGGING_LINKED_LIBS})
