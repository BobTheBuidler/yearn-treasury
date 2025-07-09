#include <Python.h>

PyMODINIT_FUNC
PyInit_donations(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("d5aee7d4e845e8a4d3c4__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___rules___other_expense___donations");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "d5aee7d4e845e8a4d3c4__mypyc.init_yearn_treasury___rules___other_expense___donations");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_donations(); }
