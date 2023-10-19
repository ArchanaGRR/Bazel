load("//:my_custom_rule.bzl", "write_new_file","write_new_file_with_custom_tool")

py_binary(
    name = "my_build_tool",
    srcs = ["my_build_tool.py"],
)

write_new_file(
    name = "write_my_file",
    my_input_file = "//:my_input_file.txt",
    out_file_name = "my_output-file",
)
write_new_file_with_custom_tool(
    name = "write_new_file_with_custom_tool",
    my_custom_build_tool= "//:my_build_tool",
    my_input_file ="//:my_input_file.txt",
    out_file_name = "my_build_output_file",

    
)
