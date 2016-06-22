#include "debugger.h"
#include "regular.h"
#include <string>
#pragma once
using namespace std;
enum TOKENTYPE {COMMA, PERIOD, Q_MARK, LEFT_PAREN, RIGHT_PAREN, COLON, COLON_DASH, SCHEMES, FACTS, RULES, QUERIES, ID, STRING, EOF}

class Token{
 private:
  Debugger tokenio;
  TOKENTYPE type;
  String value;
  int line;
  string token_types[]={"COMMA", "PERIOD", "Q_MARK", "LEFT_PAREN", "RIGHT_PAREN", "COLON", "COLON_DASH", "SCHEMES", "FACTS", "RULES", "QUERIES", "ID", "STRING", "EOF"};
 public:
  Token(){
    tokenio=Debugger(true,true);
    tokenio.output("Token object created.");
    tokenio.flag(1);
  ~Token(){
    tokenio.output("Token object deconstructed.");
    tokenio.flag(2);
  }
};
