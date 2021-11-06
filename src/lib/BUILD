cc_library(
    name = "port",
    hdrs = glob(["port.h"]),
    visibility = ["//visibility:public"],
)

cc_library(
	name = "constants",
	hdrs = glob(["constants.h"]),
	deps = [
            ":port",
	],
    visibility = ["//visibility:public"],
)
