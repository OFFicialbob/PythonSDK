#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingPlayerStats(py::module &m)
{
    py::class_< FPendingPlayerStats >(m, "FPendingPlayerStats")
        .def_readwrite("Player", &FPendingPlayerStats::Player)
        .def_readwrite("PlayerName", &FPendingPlayerStats::PlayerName)
        .def_readwrite("StatGuid", &FPendingPlayerStats::StatGuid)
        .def_readwrite("Stats", &FPendingPlayerStats::Stats)
        .def_readwrite("Score", &FPendingPlayerStats::Score)
        .def_readwrite("Place", &FPendingPlayerStats::Place)
  ;
}