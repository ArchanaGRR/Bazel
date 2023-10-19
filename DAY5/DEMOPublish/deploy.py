from pathlib import Path
from shutil import copy

build_cmd = ["bazel", "build", "main"]
query_cmd = ["bazel", "cquery", "PackageMyApp"]

run(build_cmd)
res = check_output(query_cmd).decode("utf-8").strip()

artifact_path = Path(res).absolute()
target_path = Path(".").joinpath(artifact_path.name)

copy(str(artifact_path), str(target_path))