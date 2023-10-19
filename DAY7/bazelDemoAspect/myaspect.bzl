
def _counter_aspect_impl(target,ctx):
    print("aspect",ctx.label)
    return[]


counter_aspect=aspect(
    implementation = _counter_aspect_impl,
    attr_aspects = ["deps"],
)