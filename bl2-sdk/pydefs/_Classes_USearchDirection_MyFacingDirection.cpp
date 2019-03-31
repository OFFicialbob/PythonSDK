#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_MyFacingDirection(py::module &m)
{
    py::class_< USearchDirection_MyFacingDirection,  USearchDirection   >(m, "USearchDirection_MyFacingDirection")
		.def_static("StaticClass", &USearchDirection_MyFacingDirection::StaticClass, py::return_value_policy::reference)
          ;
}