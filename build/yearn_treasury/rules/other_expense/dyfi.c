#include <Python.h>

PyMODINIT_FUNC
PyInit_dyfi(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("6d2ee3c99f718634e0a2__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___rules___other_expense___dyfi");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "6d2ee3c99f718634e0a2__mypyc.init_yearn_treasury___rules___other_expense___dyfi");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_dyfi(); }
