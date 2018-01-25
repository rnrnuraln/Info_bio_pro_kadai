from waflib import Utils
from waflib.TaskGen import feature

APPNAME = 'kuku'
VERSION = '1.0.0'

def options(opt):
  opt.load('compiler_cxx')

def configure(conf):
  conf.load('compiler_cxx')
  conf.check(features='cxx cxxprogram', lib=['m'], cflags=['-Wall'], defines=['var=foo'], uselib_store='M')

def build(bld):
  bld(features='cxx cxxprogram', source='src/kuku.cpp', target='kuku')

