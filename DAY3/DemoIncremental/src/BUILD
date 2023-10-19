cc_library(
    name ="foo",
    srcs = ["foo.cpp"],
)

 

cc_library(
    name ="bar",
    srcs = ["bar.cpp"],
)

 

cc_library(
    name ="baz",
    srcs = ["baz.cpp"],
)

 

cc_binary(
    name = "bin",
    srcs = ["main.cpp"],
    deps = [":foo",":bar",":baz",],
)