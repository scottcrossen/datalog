#include <iostream>
#include "debugger.h"
#include "scanner.h"

int main(){
  cout << "Program Compiled Successfully." << endl;
  Debugger debug=Debugger("Main");
  debug.flag(1);
  Scanner scanner=Scanner();
  scanner.debug_on(true);
  scanner.initialize();
  debug.flag(2);

  scanner.input_file("./test1.txt");
  scanner.output_file("./output1.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(3, "Test 1 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test2.txt");
  scanner.output_file("./output2.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(4, "Test 2 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test3.txt");
  scanner.output_file("./output3.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(5, "Test 3 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test4.txt");
  scanner.output_file("./output4.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 4 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./in10.txt");
  scanner.output_file("./output10.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 10 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./in11.txt");
  scanner.output_file("./output11.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 11 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./in12.txt");
  scanner.output_file("./output12.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 12 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./in13.txt");
  scanner.output_file("./output13.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 13 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./in14.txt");
  scanner.output_file("./output14.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 14 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./in15.txt");
  scanner.output_file("./output15.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 15 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./in61.txt");
  scanner.output_file("./output61.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 61 output:");
  scanner.print();
  scanner.clear_tokens();

  scanner.input_file("./test62.txt");
  scanner.output_file("./output62.txt");
  scanner.read_in();
  scanner.write_out();
  debug.output(6, "Test 62 output:");
  scanner.print();
  scanner.clear_tokens();

  debug.output(7,"End of main reached.");
  return 0;
}
