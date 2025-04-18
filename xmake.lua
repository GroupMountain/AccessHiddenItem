add_rules("mode.debug", "mode.release")

add_repositories(
    "liteldev-repo https://github.com/LiteLDev/xmake-repo.git",
    "groupmountain-repo https://github.com/GroupMountain/xmake-repo.git"
)

add_requires("levilamina", {configs = {target_type = "server"}})
add_requires(
    "levibuildscript",
    "gmlib"
)

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

target("AccessHiddenItem")
    add_rules("@levibuildscript/linkrule")
    add_rules("@levibuildscript/modpacker")
    add_cxflags(
        "/EHa",
        "/utf-8",
        "/W4",
        "/w44265",
        "/w44289",
        "/w44296",
        "/w45263",
        "/w44738",
        "/w45204"
    )
    add_defines(
        "NOMINMAX",
        "UNICODE",
        "_HAS_CXX23=1"
    )
    add_packages(
        "levilamina",
        "gmlib"
    )
    set_exceptions("none")
    set_kind("shared")
    set_languages("cxx20")
    add_headerfiles("src/**.h")
    add_files("src/**.cpp")
    add_includedirs("src")
