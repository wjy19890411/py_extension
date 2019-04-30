from distutils.core import setup, Extension

module1 = Extension('demo',
                    sources = ['demo.c'])

setup (name = 'py_extension_toy',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [module1])
