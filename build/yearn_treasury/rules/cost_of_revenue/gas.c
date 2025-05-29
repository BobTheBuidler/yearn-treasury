#include <Python.h>

PyMODINIT_FUNC
PyInit_gas(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("ac25d7e9d6501b32db99__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___rules___cost_of_revenue___gas");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "ac25d7e9d6501b32db99__mypyc.init_yearn_treasury___rules___cost_of_revenue___gas");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_gas(); }
