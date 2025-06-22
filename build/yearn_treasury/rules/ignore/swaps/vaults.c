#include <Python.h>

PyMODINIT_FUNC
PyInit_vaults(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("cc156e4435e1e8281f42__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___rules___ignore___swaps___vaults");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "cc156e4435e1e8281f42__mypyc.init_yearn_treasury___rules___ignore___swaps___vaults");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_vaults(); }
