#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DecrementObjective(py::module &m)
{
    py::class_< UBehavior_DecrementObjective,  UBehaviorBase   >(m, "UBehavior_DecrementObjective")
		.def_static("StaticClass", &UBehavior_DecrementObjective::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ObjectiveToDecrement", &UBehavior_DecrementObjective::ObjectiveToDecrement)
        .def("ApplyBehaviorToContext", &UBehavior_DecrementObjective::ApplyBehaviorToContext)
          ;
}