workspace(name = 'dhi')


bind(
  name = 'gtest',
  actual = '//third_party/googletest:googlemock',
)

bind(
  name = 'gtest_main',
  actual = '//third_party/googletest:googlemock_main',
)

new_local_repository(
    name = "googletest",
    path = "//third_party:googletest",
    build_file = "BUILD.bazel",
)
