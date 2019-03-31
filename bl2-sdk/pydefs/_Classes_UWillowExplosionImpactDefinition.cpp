#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowExplosionImpactDefinition(py::module &m)
{
    py::class_< UWillowExplosionImpactDefinition,  UWillowImpactDefinition   >(m, "UWillowExplosionImpactDefinition")
		.def_static("StaticClass", &UWillowExplosionImpactDefinition::StaticClass, py::return_value_policy::reference)
          ;
}