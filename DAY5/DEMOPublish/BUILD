load("@rules_python//python:defs.bzl","py_binary")
load("@rules_pkg//pkg:zip.bzl","pkg_zip")

py_binary(
    name = "main",
    srcs = ["main.py"],
)


pkg_zip(
    name = "PackageMyApp",
    srcs = ["//:main"],
    out = "ReadyforDeloyement.zip"
)