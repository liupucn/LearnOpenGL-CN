#pragma once
#include "glad/glad.h"
#include <iostream>
using namespace std;

class Shader
{
public:
	//程序ID
	unsigned int ID;

	//构造器读取并构造着色器
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	
	//激活渲染程序
	void use();
	
	//uniform工具函数
	void setBool(const std::string &name, bool value) const;

	void setInt(const std::string &name, int value) const;

	void setFloat(const std::string &name, float value) const;


};

