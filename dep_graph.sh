bazel query --notool_deps --noimplicit_deps "deps(//src/main:main)" --output graph > ./dep_draph.dot
xdot ./dep_draph.dot