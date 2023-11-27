//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "nearest_spheres.h"
using namespace std;

static void test_2_2() {
  // Crear functor
  nearest_spheres<double, double> ns;
  // Agregar esferas
  ns.add_sphere(15.5, 2.5);	// #1
  ns.add_sphere(5.3, 1.3);	// #2
  ns.add_sphere(8.7, 2.3);	// #3
  ns.add_sphere(20.8, 1.7);	// #4
  ns.add_sphere(15.1, 2.8);	// #5
  ns.add_sphere(12.4, 2.8);	// #6
  ns.add_sphere(24.1, 2.6);	// #7
  ns.add_sphere(11.1, 2.4);	// #8
  ns.add_sphere(2.1, 2.4);	// #9
  ns.add_sphere(4.1, 2.4);	// #10
  // Obteniendo esferas en orden
  vector<sphere<double, double>> spheres = ns(5);
  // Mostrando resultado
  std::cout << ns.average_weight() << std::endl;
  cout << spheres;
}

TEST_CASE("Question #2.2") {
  execute_test("test_2_2.in", test_2_2);
}