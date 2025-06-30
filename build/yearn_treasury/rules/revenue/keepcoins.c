#include <Python.h>

PyMODINIT_FUNC
PyInit_keepcoins(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("24d837ededc6fd012b63__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___rules___revenue___keepcoins");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "24d837ededc6fd012b63__mypyc.init_yearn_treasury___rules___revenue___keepcoins");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_keepcoins(); }
