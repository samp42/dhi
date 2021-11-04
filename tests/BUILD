cc_test(
	name = "dio_test",
	srcs = glob(["dio_test.cc"]),
    hdrs = glob(["**/*.h"]),
	deps = [
		"//third_party/googletest:gtest",
		"//third_party/googletest:gtest_main", #if test source file has no main()
	],
)
