#pragma once

#include <glad/glad.h> // include glad to get all the required OpenGL headers

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shaders
{

public:

    // the program ID
    unsigned int ID;

    // constructor reads and builds the shader
    Shaders(const char* vertexPath, const char* fragmentPath);

    // use/activate the shader
    void use();

    // utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

    void setVec3(const std::string& name, glm::vec3 value) const;
    void setVec3(const std::string& name, const float r, const float g, const float b) const;

private:

    void checkCompileErrors(unsigned int shader, std::string type);

};