#ifndef RESULT_H
#define RESULT_H
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPalette"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <ostream>

class Result
{
public:
    using lineNumber = std::vector<std::string>::size_type;
	Result(std::string s, 
			std::shared_ptr<std::set<lineNumber>> p,
			std::shared_ptr<std::vector<std::string>> f):
	find(s),lines(p),file(f) { }

	std::string find; //����
	std::shared_ptr<std::set<lineNumber>> lines; //�к�
	std::shared_ptr<std::vector<std::string>> file; //�����ļ�
};

#endif // RESULT_H
