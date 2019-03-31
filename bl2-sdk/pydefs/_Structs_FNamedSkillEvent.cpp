#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedSkillEvent(py::module &m)
{
    py::class_< FNamedSkillEvent >(m, "FNamedSkillEvent")
        .def_readwrite("EventName", &FNamedSkillEvent::EventName)
        .def_readwrite("RequiredSkills", &FNamedSkillEvent::RequiredSkills)
        .def_readwrite("EventResponses", &FNamedSkillEvent::EventResponses)
        .def_readwrite("RequiredActionSkillState", &FNamedSkillEvent::RequiredActionSkillState)
  ;
}