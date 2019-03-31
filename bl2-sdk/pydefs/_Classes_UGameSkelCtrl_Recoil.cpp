#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameSkelCtrl_Recoil(py::module &m)
{
    py::class_< UGameSkelCtrl_Recoil,  USkelControlBase   >(m, "UGameSkelCtrl_Recoil")
		.def_static("StaticClass", &UGameSkelCtrl_Recoil::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Recoil", &UGameSkelCtrl_Recoil::Recoil)
        .def_readwrite("Aim", &UGameSkelCtrl_Recoil::Aim)
          ;
}