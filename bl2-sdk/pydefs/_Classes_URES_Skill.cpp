#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Skill(py::module &m)
{
    py::class_< URES_Skill,  UActionResource   >(m, "URES_Skill")
		.def_static("StaticClass", &URES_Skill::StaticClass, py::return_value_policy::reference)
          ;
}