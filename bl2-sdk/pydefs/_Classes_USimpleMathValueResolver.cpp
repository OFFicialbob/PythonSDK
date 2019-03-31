#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USimpleMathValueResolver(py::module &m)
{
    py::class_< USimpleMathValueResolver,  UAttributeValueResolver   >(m, "USimpleMathValueResolver")
		.def_static("StaticClass", &USimpleMathValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Arg1Option", &USimpleMathValueResolver::Arg1Option)
        .def_readwrite("Operand", &USimpleMathValueResolver::Operand)
        .def_readwrite("Arg1Attribute", &USimpleMathValueResolver::Arg1Attribute)
        .def_readwrite("Argument", &USimpleMathValueResolver::Argument)
          ;
}