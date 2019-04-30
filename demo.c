#include <Python.h>
#include <stdio.h>

static PyObject *GetNone(PyObject *self, PyObject *noargs) {
  printf("GetNone takes no args, returns None.\n");
  Py_RETURN_NONE;
}

static PyObject *GetA(PyObject *self, PyObject *noargs) {
  printf("GetA takes no args, return 'a'\n");
  return PyString_FromStringAndSize("a", 1);
}

static PyObject *GetString(PyObject *self, PyObject *args) {
  int input;
  if (!PyArg_ParseTuple(args, "i", &input))
    return NULL;
  printf("GetString takes an integer (which is %d here), return some string.\n",
         input);
  char ret[] = "string op in c is too hard. TODO: return some string according "
               "to input.";
  return PyString_FromStringAndSize(ret, sizeof(ret));
}

static PyMethodDef module_methods[] = {
    {"GetNone", (PyCFunction)GetNone, METH_NOARGS, "GetNone()"},
    {"GetA", (PyCFunction)GetA, METH_NOARGS, "GetString()"},
    {"GetString", (PyCFunction)GetString, METH_VARARGS, "GetString(int)"},
    {NULL, NULL},
};

void initdemo(void) {
  PyObject *m;
  m = Py_InitModule3("demo", module_methods, "module doc");
  if (m == NULL)
    return;
  Py_INCREF(m);
}
