#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FArchwayResult(py::module &m)
{
    py::class_< FArchwayResult >(m, "FArchwayResult")
        .def_readwrite("RequestId", &FArchwayResult::RequestId)
        .def_readwrite("GearboxUserToken", &FArchwayResult::GearboxUserToken)
        .def_readwrite("GearboxUserEmail", &FArchwayResult::GearboxUserEmail)
        .def_readwrite("Messages", &FArchwayResult::Messages)
        .def_readwrite("Entitlements", &FArchwayResult::Entitlements)
        .def_readwrite("Offers", &FArchwayResult::Offers)
        .def_readwrite("Services", &FArchwayResult::Services)
        .def_readwrite("EmergencyMessage", &FArchwayResult::EmergencyMessage)
  ;
}