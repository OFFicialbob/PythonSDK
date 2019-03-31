#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowStaggerAnimNodeBlend(py::module &m)
{
    py::class_< UWillowStaggerAnimNodeBlend,  UAnimNodeBlendBase   >(m, "UWillowStaggerAnimNodeBlend")
		.def_static("StaticClass", &UWillowStaggerAnimNodeBlend::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StaggerNodeIndex", &UWillowStaggerAnimNodeBlend::StaggerNodeIndex)
        .def_readwrite("StaggerNodeWeight", &UWillowStaggerAnimNodeBlend::StaggerNodeWeight)
        .def_readwrite("StaggerNodeWeightTarget", &UWillowStaggerAnimNodeBlend::StaggerNodeWeightTarget)
        .def_readwrite("BlendTimeToGo", &UWillowStaggerAnimNodeBlend::BlendTimeToGo)
        .def_readwrite("AltCondition", &UWillowStaggerAnimNodeBlend::AltCondition)
        .def_readwrite("AdditionalRotationDef", &UWillowStaggerAnimNodeBlend::AdditionalRotationDef)
        .def_readwrite("AdditionalRotationAlt", &UWillowStaggerAnimNodeBlend::AdditionalRotationAlt)
        .def("EndStaggerBlend", &UWillowStaggerAnimNodeBlend::EndStaggerBlend)
        .def("StartStaggerBlend", &UWillowStaggerAnimNodeBlend::StartStaggerBlend)
        .def("PlayStaggerAnimation", &UWillowStaggerAnimNodeBlend::PlayStaggerAnimation)
        .def("StopStaggerAnimation", &UWillowStaggerAnimNodeBlend::StopStaggerAnimation)
          ;
}