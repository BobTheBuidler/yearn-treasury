#include <Python.h>

PyMODINIT_FUNC
PyInit_yteams(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("7394b9c44dc1c3d0ac44__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___rules___revenue___yteams");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "7394b9c44dc1c3d0ac44__mypyc.init_yearn_treasury___rules___revenue___yteams");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_yteams(); }
