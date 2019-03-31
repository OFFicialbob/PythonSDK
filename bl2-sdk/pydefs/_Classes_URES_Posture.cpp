#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Posture(py::module &m)
{
    py::class_< URES_Posture,  UActionResource   >(m, "URES_Posture")
		.def_static("StaticClass", &URES_Posture::StaticClass, py::return_value_policy::reference)
          ;
}