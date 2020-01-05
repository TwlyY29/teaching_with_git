#include <Rcpp.h>
#include "fancyalgorithms/fancy_functions.hpp"

using namespace Rcpp;

RCPP_MODULE(fancy){

//<<600-first_function
  function("fancy_increment" , &fancy_increment  , "documentation for fancy_increment ");
//>>600-first_function
//<<900-container_r
  function("fancy_increment_container" , &fancy_increment_container  , "documentation for fancy_increment_container ");
//>>900-container_r

//<<700-a_class_in_r
  class_<FancyObject>("FancyObject")
    .constructor()
    .constructor<int,int>()

    .method("random_increment", &FancyObject::random_increment , "increment by random number")

//<<800-class_members
    .property("min", &FancyObject::get_min, &FancyObject::set_min)
    .property("max", &FancyObject::get_max, &FancyObject::set_max)
//>>800-class_members
    ;
//>>700-a_class_in_r
}
