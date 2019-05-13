#include <Python.h>
#include <iostream>
#include <string>

static PyObject *ConcatStr(PyObject *self, PyObject *args, PyObject *kwargs) {
  char *str1 = nullptr, *str2 = nullptr, *delimiter = ",";
  static char *kwlist[] = {"str1", "str2", "delimiter", nullptr};
  if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ss|s", kwlist, &str1, &str2,
                                   &delimiter)) {
    return nullptr;
  }
  return PyString_FromFormat("%s%s%s", str1, delimiter, str2);
}

static PyMethodDef module_methods[] = {
    {"ConcatStr", (PyCFunction)ConcatStr, METH_KEYWORDS,
     "ConcatStr(str1, str2, delimiter=',')"},
    {nullptr, nullptr},
};

// Prevent C++ name mangling and Python can't find function with name
// 'initcppdemo'.
extern "C" void initcppdemo(void) {
  PyObject *m;
  m = Py_InitModule3("cppdemo", module_methods, "module doc");
  if (m == nullptr)
    return;
  Py_INCREF(m);
}
