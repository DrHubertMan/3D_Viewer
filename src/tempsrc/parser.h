#include <epoxy/gl.h>
/* #include <glm/glm.hpp> */
/* -I/Users/joramuns/.brew/Cellar/glm/0.9.9.8/include */
/* brew install glm */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace s21 {
class Parser {
 public:
  Parser() = delete;
  explicit Parser(const std::string &filename);

 private:
  int ReadObj(const std::string &filename);

  struct point {
    GLfloat x_;
    GLfloat y_;
    GLfloat z_;
    GLfloat a_{0.0};
  };

  std::vector<point> vertices_;
  std::vector<GLuint> faces_;
};
}  // namespace s21
