#include <Python.h>

PyMODINIT_FUNC
PyInit__request(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("8cac1d3857b01c92a42d__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_yearn_treasury___budget____request");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "8cac1d3857b01c92a42d__mypyc.init_yearn_treasury___budget____request");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit__request(); }
