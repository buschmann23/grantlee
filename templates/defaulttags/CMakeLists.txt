add_library(grantlee_defaulttags MODULE
  defaulttags.cpp
  autoescape.cpp
  comment.cpp
  cycle.cpp
  debug.cpp
  filtertag.cpp
  firstof.cpp
  for.cpp
  if.cpp
  ifchanged.cpp
  ifequal.cpp
  load.cpp
  mediafinder.cpp
  now.cpp
  range.cpp
  regroup.cpp
  spaceless.cpp
  templatetag.cpp
  widthratio.cpp
  with.cpp
)
set_property(TARGET grantlee_defaulttags PROPERTY
  EXPORT_NAME defaulttags
)
target_link_libraries(grantlee_defaulttags PRIVATE
  Grantlee5::Templates
)
target_compile_features(grantlee_defaulttags PRIVATE
  cxx_auto_type
  cxx_variadic_templates
)
grantlee_adjust_plugin_name(grantlee_defaulttags)

install(TARGETS grantlee_defaulttags 
  EXPORT grantlee_targets
  LIBRARY DESTINATION ${PLUGIN_INSTALL_DIR}
  COMPONENT Templates
)
