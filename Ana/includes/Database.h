#ifndef Database_h
#define Database_h

#include <string>
#include "nlohmann/json.hpp" 

nlohmann::json ReadJSON(const std::string& fname);
void WriteJSON(const std::string& fname, const nlohmann::json& db);

#endif
