#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingDistance(py::module &m)
{
    py::class_< ULevelStreamingDistance,  ULevelStreaming   >(m, "ULevelStreamingDistance")
		.def_static("StaticClass", &ULevelStreamingDistance::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Origin", &ULevelStreamingDistance::Origin)
        .def_readwrite("MaxDistance", &ULevelStreamingDistance::MaxDistance)
          ;
}