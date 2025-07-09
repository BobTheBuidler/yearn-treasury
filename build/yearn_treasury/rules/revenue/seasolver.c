#include <Python.h>

PyMODINIT_FUNC
PyInit_seasolver(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("f4259edc049d194ab89a__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___rules___revenue___seasolver");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "f4259edc049d194ab89a__mypyc.init_yearn_treasury___rules___revenue___seasolver");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_seasolver(); }
