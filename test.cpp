#include <iostream>
#include "debugger.h"
#include "scanner.h"
#include "parser.h"
using namespace std;
int main(){
  cout << "Program Compiled Successfully." << endl;
  Debugger debug=Debugger("Main");
  debug.flag(1);
  //Scanner scanner=Scanner();
  //scanner.debug_on(true);
  //scanner.initialize();
  //debug.flag(2);
  
  Grammer grammer=Grammer("yo","yo1 yo2 yo3");
  grammer.debug_on(true);

/*
  scanner.input_file("./test_cases/in20.txt");
  scanner.output_file("./test_cases/output20.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(3, "Test 20 output:");
  //scanner.print();
  scanner.clear_tokens();
  
  scanner.input_file("./test_cases/in2.txt");
  scanner.output_file("./test_cases/output2.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(4, "Test 2 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in3.txt");
  scanner.output_file("./test_cases/output3.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(5, "Test 3 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in4.txt");
  scanner.output_file("./test_cases/output4.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 4 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in10.txt");
  scanner.output_file("./test_cases/output10.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 10 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in11.txt");
  scanner.output_file("./test_cases/output11.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 11 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in12.txt");
  scanner.output_file("./test_cases/output12.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 12 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in13.txt");
  scanner.output_file("./test_cases/output13.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 13 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in14.txt");
  scanner.output_file("./test_cases/output14.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 14 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in15.txt");
  scanner.output_file("./test_cases/output15.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 15 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in61.txt");
  scanner.output_file("./test_cases/output61.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 61 output:");
  //scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test_cases/in62.txt");
  scanner.output_file("./test_cases/output62.txt");
  scanner.read_in();
  scanner.write_out();
  //debug.output(6, "Test 62 output:");
  //scanner.print();
  scanner.clear_tokens(); */

  debug.output(7,"End of main reached.");
  return 0;
}
