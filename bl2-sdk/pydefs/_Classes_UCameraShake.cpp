#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCameraShake(py::module &m)
{
    py::class_< UCameraShake,  UObject   >(m, "UCameraShake")
		.def_static("StaticClass", &UCameraShake::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OscillationDuration", &UCameraShake::OscillationDuration)
        .def_readwrite("OscillationBlendInTime", &UCameraShake::OscillationBlendInTime)
        .def_readwrite("OscillationBlendOutTime", &UCameraShake::OscillationBlendOutTime)
        .def_readwrite("RotOscillation", &UCameraShake::RotOscillation)
        .def_readwrite("LocOscillation", &UCameraShake::LocOscillation)
        .def_readwrite("FOVOscillation", &UCameraShake::FOVOscillation)
        .def_readwrite("Anim", &UCameraShake::Anim)
        .def_readwrite("AnimPlayRate", &UCameraShake::AnimPlayRate)
        .def_readwrite("AnimScale", &UCameraShake::AnimScale)
        .def_readwrite("AnimBlendInTime", &UCameraShake::AnimBlendInTime)
        .def_readwrite("AnimBlendOutTime", &UCameraShake::AnimBlendOutTime)
        .def_readwrite("RandomAnimSegmentDuration", &UCameraShake::RandomAnimSegmentDuration)
        .def("GetLocOscillationMagnitude", &UCameraShake::GetLocOscillationMagnitude)
        .def("GetRotOscillationMagnitude", &UCameraShake::GetRotOscillationMagnitude)
          ;
}