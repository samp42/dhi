workspace(name = 'dhi')

git_repository(
    name = "wiringpi",
    remote = "https://github.com/WiringPi/WiringPi.git",
    commit ="7f8fe26e4f775abfced43c07657a353f03ddb2d0".
)

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
