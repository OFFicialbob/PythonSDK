#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AddRemoveFaceFXAnimSet(py::module &m)
{
    py::class_< USeqAct_AddRemoveFaceFXAnimSet,  USequenceAction   >(m, "USeqAct_AddRemoveFaceFXAnimSet")
		.def_static("StaticClass", &USeqAct_AddRemoveFaceFXAnimSet::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FaceFXAnimSets", &USeqAct_AddRemoveFaceFXAnimSet::FaceFXAnimSets)
          ;
}