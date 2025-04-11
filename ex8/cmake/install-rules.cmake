install(
    TARGETS ex8_exe
    RUNTIME COMPONENT ex8_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
