load("@rules_cc//cc:defs.bzl", "cc_binary")
def custom_cpp_binary(name):
    cc_binary(
        name = name,
        srcs = ["main.cpp"],
    )