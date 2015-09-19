#coding=utf-8
env = Environment()
env.Clone()

env["project_name"] = "hello_world"
env["CXX"] = "ccache g++"
env.Append(CCFLAGS = ['-std=c++11', '-Wall', '-g', '-pthread'])

env["depend_include_path"] = ['#/depend/']
env.Append(CPPPATH = ['#'] +  env["depend_include_path"])
env["depend_3rd_lib_path"] = ['#/depend/lib/']

env["build_lib_path"] = ["#/build/lib/"]
env.Append(LIBPATH =  env["depend_3rd_lib_path"] + env["build_lib_path"])
env['run_case_lib_path'] =  env["depend_3rd_lib_path"] + ["build/lib/"]

env["depend_3rd_libs"] = ['log4z', 'pthread']
env["bin_depend_libs"] = ['util']
env["all_libs"] = env["bin_depend_libs"] + env["depend_3rd_libs"] 

env['install_bin_root'] = ['#/build/install/bin/']
env['install_lib_root'] = ['#/build/install/lib/']
env['install_head_root'] = '#/build/install/header/'  + env["project_name"] + "/"

def run_ut(ut_env, target, source, libs):
    program = ut_env.Program(target=target, source=source, LIBS=libs + ['gtest', 'gtest_main'])
    run_str = "/usr/bin/env LD_LIBRARY_PATH=$LD_LIBRARY_PATH"
    for dir in env['run_case_lib_path']:
        dir = dir.replace("#", Dir('#').abspath)
        run_str = run_str + ":" + dir
    run_str = run_str + " " + program[0].abspath
    test_alias = Alias('test', [program], run_str)
    AlwaysBuild(test_alias)

env["run_ut"] = run_ut

#Export 和子目录的Import对应，是为了传递env变量
Export('env')
SConscript("hello_world/SConscript", variant_dir="build/src/", duplicate=0)
