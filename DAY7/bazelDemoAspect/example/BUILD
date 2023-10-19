cc_binary(
    name ="main",
    srcs = ["main.cc"],
    deps = [":mylib"],
    visibility = ["__pkg__"]
)

cc_library(
    name = "mylib",
    hdrs = ["mylib.h"],
    srcs = ["mylib.cc"],
)

cc_binary(
    name = "test",
    srcs = ["test.cc"],
    deps = [":main"],
)