#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterfaceProperty(py::module &m)
{
    py::class_< UInterfaceProperty,  UProperty   >(m, "UInterfaceProperty")
		.def_static("StaticClass", &UInterfaceProperty::StaticClass, py::return_value_policy::reference)
          ;
}