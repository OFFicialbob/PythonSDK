#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailSource(py::module &m)
{
    py::class_< UParticleModuleTrailSource,  UParticleModuleTrailBase   >(m, "UParticleModuleTrailSource")
		.def_static("StaticClass", &UParticleModuleTrailSource::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SourceMethod", &UParticleModuleTrailSource::SourceMethod)
        .def_readwrite("SelectionMethod", &UParticleModuleTrailSource::SelectionMethod)
        .def_readwrite("SourceName", &UParticleModuleTrailSource::SourceName)
        .def_readwrite("SourceStrength", &UParticleModuleTrailSource::SourceStrength)
        .def_readwrite("SourceOffsetCount", &UParticleModuleTrailSource::SourceOffsetCount)
        .def_readwrite("SourceOffsetDefaults", &UParticleModuleTrailSource::SourceOffsetDefaults)
          ;
}