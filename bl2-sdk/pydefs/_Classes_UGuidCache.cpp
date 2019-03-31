#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGuidCache(py::module &m)
{
    py::class_< UGuidCache,  UObject   >(m, "UGuidCache")
		.def_static("StaticClass", &UGuidCache::StaticClass, py::return_value_policy::reference)
          ;
}