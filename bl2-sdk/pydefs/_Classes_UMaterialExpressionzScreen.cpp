#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzScreen(py::module &m)
{
    py::class_< UMaterialExpressionzScreen,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzScreen")
		.def_static("StaticClass", &UMaterialExpressionzScreen::StaticClass, py::return_value_policy::reference)
          ;
}