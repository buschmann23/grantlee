set_source_files_properties(blockcontext.h
  PROPERTIES SKIP_AUTOMOC TRUE
)

add_library(grantlee_loadertags MODULE
  loadertags.cpp
  blockcontext.cpp
  block.cpp
  extends.cpp
  include.cpp
)
set_property(TARGET grantlee_loadertags PROPERTY
  EXPORT_NAME loadertags
)
target_link_libraries(grantlee_loadertags PRIVATE
  Grantlee5::Templates
)
target_compile_features(grantlee_loadertags PRIVATE
  cxx_auto_type
)
grantlee_adjust_plugin_name(grantlee_loadertags)

install(TARGETS grantlee_loadertags
  EXPORT grantlee_targets
  LIBRARY DESTINATION ${PLUGIN_INSTALL_DIR}
  COMPONENT Templates
)
