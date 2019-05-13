from distutils.core import setup, Extension

module = Extension('cppdemo',
                    sources = ['cppdemo.cc'])

setup (name = 'py_extension_toy',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [module])
