#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPlayerMaster(py::module &m)
{
    py::class_< UIPlayerMaster,  UInterface   >(m, "UIPlayerMaster")
		.def_static("StaticClass", &UIPlayerMaster::StaticClass, py::return_value_policy::reference)
        .def("GetPlayerMasterPlayerController", &UIPlayerMaster::GetPlayerMasterPlayerController, py::return_value_policy::reference)
          ;
}