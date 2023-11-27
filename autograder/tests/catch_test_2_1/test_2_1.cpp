//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "nearest_spheres.h"
using namespace std;

static void test_2_1() {
  // Crear functor
  nearest_spheres<int, double> ns;
  // Agregar esferas
  ns.add_sphere(10, 2);	// #1
  ns.add_sphere(5, 1);	// #2
  ns.add_sphere(8, 2);	// #3
  ns.add_sphere(20, 1);	// #4
  ns.add_sphere(15, 2);	// #5
  // Obteniendo esferas en orden: #2, #3, #1
  vector<sphere<int, double>> spheres = ns(3);
  // Mostrando resultado
  std::cout << ns.average_weight() << std::endl;
  std::cout << spheres;
}

TEST_CASE("Question #2.1") {
  execute_test("test_2_1.in", test_2_1);
}