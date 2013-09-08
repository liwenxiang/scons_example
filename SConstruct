#coding=utf-8
env = Environment()
env.Clone()
import os


env["systerm_include"] = ['']
env["user_include"] = ['']
env.Append(CPPPATH = ['#'] + env["systerm_include"] + env["user_include"])


env["build_lib"] = ["#/build/lib/"]
env["systerm_lib_path"] = ['']
env["user_lib_path"] = ['']
env.Append(LIBPATH = env["systerm_lib_path"] + env["user_lib_path"] + env["build_lib"])

env["system_lib"] = ['m']
env["use_lib"] = ['unit']
env["all_libs"] = env["system_lib"] + env["use_lib"]

#Export 和子目录的Import对应，是为了传递env变量
Export('env')
SConscript("hello_world/SConscript", variant_dir="build/src/", duplicate=0)
