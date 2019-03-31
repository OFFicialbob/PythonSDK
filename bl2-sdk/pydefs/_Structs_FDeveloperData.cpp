#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeveloperData(py::module &m)
{
    py::class_< FDeveloperData >(m, "FDeveloperData")
        .def_readwrite("Gamertag", &FDeveloperData::Gamertag)
        .def_readwrite("UniqueId", &FDeveloperData::UniqueId)
        .def_readwrite("Platform", &FDeveloperData::Platform)
        .def_readwrite("UnlocksGamerpics", &FDeveloperData::UnlocksGamerpics)
  ;
}