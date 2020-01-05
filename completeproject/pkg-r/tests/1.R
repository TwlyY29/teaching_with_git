#<<600-first_function
test.load <- function(){
  library(fancypackage)
}

test.increment <- function(){
  library(fancypackage)
  n <- 3
  inc <- fancy_increment(n)
  checkTrue(inc >= n+1 & inc <= n+10)
}
#>>600-first_function

#<<700-a_class_in_r
test.default_constructor <- function(){
  library(fancypackage)
  fo <- new(FancyObject)
  n <- 3
  inc <- fo$random_increment(n)
  checkTrue(inc >= n+1 & inc <= n+10)
}

test.custom_constructor <- function(){
  library(fancypackage)
  fo <- new(FancyObject,2,5)
  n <- 3
  inc <- fo$random_increment(n)
  checkTrue(inc >= n+2 & inc <= n+5)
}
#>>700-a_class_in_r


#<<800-class_members
test.properties <- function(){
  library(fancypackage)
  fo <- new(FancyObject,2,5)
  fo$min <- 0
  fo$max <- 1
  n <- 3
  inc <- fo$random_increment(n)
  checkTrue(inc >= n & inc <= n+1)
}
#>>800-class_members


#<<900-container_r
test.container <- function() {
  library(fancypackage)
  n <- c(1,2,3)
  inc <- fancy_increment_container(n)
  checkTrue(all(inc>n))
}
#>>900-container_r
