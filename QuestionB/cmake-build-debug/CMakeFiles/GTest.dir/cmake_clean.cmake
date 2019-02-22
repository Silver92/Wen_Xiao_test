file(REMOVE_RECURSE
  "GTest.pdb"
  "GTest"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/GTest.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
