# py_extension

Build a python extension module. Use python 2.7. This is following instructions:

https://docs.python.org/2/extending/extending.html  
https://docs.python.org/2/extending/building.html

Lengthy docs on functions in Python.h: 

https://docs.python.org/2/c-api/index.html.

### c_extensions

Dump ground to play with stuff.

Install extension:

`$ python setup.py install`

In python (whatever dir):

```python
import demo

demo.GetNone()
demo.GetA()
demo.GetString(123)
```

If you modify demo.c, install extension again to see change.

### cpp_extensions

Navigate to cpp_extensions/src/, test changes to cppdemo.cc:

```sh
$ make cppdemo_test
```

Cleanup cpp_extensions/src/:

```sh
$ make clean
```

