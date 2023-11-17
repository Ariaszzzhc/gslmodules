add_rules("mode.release", "mode.debug")
set_languages("c++20")

add_requires("microsoft-gsl 4.0.0")

target("microsoft.gsl")
    set_kind("static")
    add_files("./microsoft.gsl.ixx")
    add_packages("microsoft-gsl")
