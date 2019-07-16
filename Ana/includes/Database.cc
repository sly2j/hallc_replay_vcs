#define Database_cxx
#include "Database.h"
#include <iostream>
#include <fstream>
#include <iomanip>

#include "nlohmann/json.hpp" 
using nlohmann::json;

json ReadJSON(const std::string& fname) {
  nlohmann::json db;
  {
    std::ifstream db_input(fname);
    try {
      db_input >> db;
    } catch (json::parse_error) {
      std::cerr << "ERROR: json file, " << fname
                << ", is incomplete or has broken syntax.\n";
      std::quick_exit(-127);
    }
  }
  return db;
}

void WriteJSON(const std::string& fname, const json& db) {
  std::ofstream db_output(fname); 
  db_output << std::setw(4) << db << "\n";
}
