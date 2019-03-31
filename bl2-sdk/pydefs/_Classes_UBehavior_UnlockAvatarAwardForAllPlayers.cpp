#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockAvatarAwardForAllPlayers(py::module &m)
{
    py::class_< UBehavior_UnlockAvatarAwardForAllPlayers,  UBehaviorBase   >(m, "UBehavior_UnlockAvatarAwardForAllPlayers")
		.def_static("StaticClass", &UBehavior_UnlockAvatarAwardForAllPlayers::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AvatarAward", &UBehavior_UnlockAvatarAwardForAllPlayers::AvatarAward)
        .def("ApplyBehaviorToContext", &UBehavior_UnlockAvatarAwardForAllPlayers::ApplyBehaviorToContext)
          ;
}