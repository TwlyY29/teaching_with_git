#include "fancyalgorithms/fancy_functions.hpp"
#include <boost/python.hpp>
//<<400-container
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>
//>>400-container
namespace py = boost::python;


BOOST_PYTHON_MODULE(fancymodule)
{
//<<100-simple_python
  py::def("fancy_increment", fancy_increment);
//>>100-simple_python
  
//<<200-a_class
  py::class_<FancyObject>("FancyObject", py::init<>())
    .def(py::init<int,int>())
//<<300-class_members
    .add_property("min", &FancyObject::get_min, &FancyObject::set_min)
    .add_property("max", &FancyObject::get_max, &FancyObject::set_max)
//>>300-class_members
    .def("random_increment", &FancyObject::random_increment);
//>>200-a_class

//<<400-container
  py::class_< std::vector<int> > ("IntList")
    .def(py::vector_indexing_suite< std::vector<int> >());
  py::def("fancy_increment_container", fancy_increment_container);
//>>400-container
}
