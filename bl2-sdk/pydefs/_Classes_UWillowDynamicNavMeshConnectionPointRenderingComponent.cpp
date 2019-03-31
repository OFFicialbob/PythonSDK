#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDynamicNavMeshConnectionPointRenderingComponent(py::module &m)
{
    py::class_< UWillowDynamicNavMeshConnectionPointRenderingComponent,  UPrimitiveComponent   >(m, "UWillowDynamicNavMeshConnectionPointRenderingComponent")
		.def_static("StaticClass", &UWillowDynamicNavMeshConnectionPointRenderingComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ConnectionValidColor", &UWillowDynamicNavMeshConnectionPointRenderingComponent::ConnectionValidColor)
        .def_readwrite("ConnectionInvalidColor", &UWillowDynamicNavMeshConnectionPointRenderingComponent::ConnectionInvalidColor)
          ;
}