#include "parser.h"

namespace s21 {
Parser::Parser(const std::string &filename) { ReadObj(filename); }

/* Private functions */
int Parser::ReadObj(const std::string &filename) {
  std::ifstream file;
  try {
    file.open(filename, std::ios::in);
    /* file.exceptions(std::ifstream::failbit); */
    std::cout << "here" << std::endl;
    std::string line;
    if (file) { 
    } else {
      std::cout << "opana" << std::endl;
    }
    while (std::getline(file, line)) {
      std::string prefix = line.substr(0, 2);
      if (prefix == "v ") {
        std::istringstream data(line.substr(2));
        point vertex;
        data >> vertex.x_;
        data >> vertex.y_;
        data >> vertex.z_;
        data >> vertex.a_;
        std::cout << vertex.x_ << " " << vertex.y_ << " " << vertex.z_
                  << " " << vertex.a_ << std::endl;
      } else if (prefix == "f ") {
      }
    }
  } catch (const std::ifstream::failure &e) {
    std::cout << "Wrong filename" << std::endl;
  }
  return 0;
}

}  // namespace s21
