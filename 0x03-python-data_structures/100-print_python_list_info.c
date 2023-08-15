#include <Python.h>

/**
 * print_python_list_info – Print out basic info about Python lists.
 * @p: PyObject list.
 */
void print_python_list_info(PyObject *p)
{
	int size, all, x;
	PyObject *pobj;

	size = Py_SIZE(p);
	all = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", all);

	for (x = 0; x < size; x++)
	{
		printf("Element %d: ", x);

		pobj = PyList_GetItem(p, x);
		printf("%s\n", Py_TYPE(pobj)->tp_name);
	}
}
